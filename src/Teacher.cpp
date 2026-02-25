// Teacher class implementation

class Teacher {
    private:
        std::string name;
        int age;

    public:
        Teacher(std::string name, int age) : name(name), age(age) {};
        void display() {
            std::cout << "Teacher: " << name << ", Age: " << age << std::endl;
        }
};

int main() {
    Teacher teacher("John Doe", 30);
    teacher.display();
    return 0;
}
