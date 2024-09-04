#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
enum Opcode {
    SET, LDR, ADD, INC, DEC, STR, SHW, PAUSE, END, UNKNOWN
};

class Instruction {
public:
    Opcode opcode;
    string operand1;
    string operand2;
    string operand3;

    Instruction(Opcode op, const string& op1, const string& op2, const string& op3)
        : opcode(op), operand1(op1), operand2(op2), operand3(op3) {}
};

int ACC = 0;  
int ICR = 0;  
int MAR = 0;  
int MDR = 0;  
int UC = 0;   

// Main memory
const int MEMORY_SIZE = 100;
int memory[MEMORY_SIZE] = {0};

Opcode getOpcode(const string& str);
void executeInstruction(const Instruction& instr);
vector<Instruction> loadProgram(const string& filename);
void showRegister(const string& reg);
void showMemory(int address);

Opcode getOpcode(const string& str) {
    if (str == "SET") return SET;
    if (str == "LDR") return LDR;
    if (str == "ADD") return ADD;
    if (str == "INC") return INC;
    if (str == "DEC") return DEC;
    if (str == "STR") return STR;
    if (str == "SHW") return SHW;
    if (str == "PAUSE") return PAUSE;
    if (str == "END") return END;
    return UNKNOWN;
}

void executeInstruction(const Instruction& instr) {
    int address1, address2, address3;

    switch (instr.opcode) {
        case SET:
            address1 = stoi(instr.operand1.substr(1));
            memory[address1] = stoi(instr.operand2);
            break;
        case LDR:
            address1 = stoi(instr.operand1.substr(1));
            ACC = memory[address1];
            break;
        case ADD:
            address1 = stoi(instr.operand1.substr(1));
            if (instr.operand3.empty()) {
                if (instr.operand2.empty()) {
                    ACC += memory[address1];
                } else {
                    address2 = stoi(instr.operand2.substr(1));
                    ACC = memory[address1] + memory[address2];
                }
            } else {
                address2 = stoi(instr.operand2.substr(1));
                address3 = stoi(instr.operand3.substr(1));
                memory[address3] = memory[address1] + memory[address2];
            }
            break;
        case INC:
            address1 = stoi(instr.operand1.substr(1));
            memory[address1]++;
            break;
        case DEC:
            address1 = stoi(instr.operand1.substr(1));
            memory[address1]--;
            break;
        case STR:
            address1 = stoi(instr.operand1.substr(1));
            memory[address1] = ACC;
            break;
        case SHW:
            if (instr.operand1[0] == 'D') {
                address1 = stoi(instr.operand1.substr(1));
                showMemory(address1);
            } else {
                showRegister(instr.operand1);
            }
            break;
        case PAUSE:
            break;
        case END:
            break;
        default:
            cerr << "Instrucción desconocida: " << instr.opcode << endl;
            break;
    }
}

void showRegister(const string& reg) {
    if (reg == "ACC") cout << "ACC: " << ACC << endl;
    else if (reg == "ICR") cout << "ICR: " << ICR << endl;
    else if (reg == "MAR") cout << "MAR: " << MAR << endl;
    else if (reg == "MDR") cout << "MDR: " << MDR << endl;
    else if (reg == "UC") cout << "UC: " << UC << endl;
}

void showMemory(int address) {
    cout << "Memory[" << address << "]: " << memory[address] << endl;
}

vector<Instruction> loadProgram(const string& filename) {
    vector<Instruction> program;
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        istringstream iss(line);
        string opcodeStr, operand1, operand2, operand3;
        iss >> opcodeStr >> operand1 >> operand2 >> operand3;

        Opcode opcode = getOpcode(opcodeStr);
        program.emplace_back(opcode, operand1, operand2, operand3);
    }

    file.close();
    return program;
}

int main() {
    string filename = "program1.txt";
    vector<Instruction> program = loadProgram(filename);

    for (ICR = 0; ICR < program.size(); ICR++) {
        executeInstruction(program[ICR]);
        if (program[ICR].opcode == END) break;
    }

    return 0;
}
