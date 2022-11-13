#ifndef FILEHANDLING_H
#define FILEHANDLING_H

#include <QString>
#include <QVector>

class FileHandling
{
public:
    //func prototype, use these in the class
    FileHandling();
    //creating a vector of vectors (2D vectors) of strings
    QVector<QVector<QString>> ReadFile(QString fileName, int numCols); //takes info from the ReadFile function which takes fileName and num of cols as argument
    void WriteFile(QString fileName, QVector<QString> fileContent); //prototype that take fileName a vector of strings containing the content
    bool CheckValidUser(QString username, QString fileName); //prototype for checking the user exists.

private:
    bool nameFound= false; //if a name is found on the CSV, it becomes true and allows a log in, else will say there is no such user
};


#endif // FILEHANDLING_H
