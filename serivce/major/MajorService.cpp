//
// Created by khanh on 13/09/2022.
//

#include "MajorService.h"

vector<shared_ptr<Major>> MajorService::listMajor;

shared_ptr< Major> MajorService::findOneByID(string id) {

}

void MajorService::addOne() {
    shared_ptr<Major> m;
    listMajor.push_back(m);
}

shared_ptr< Major> MajorService::indOneByName(string name) {

}

void MajorService::updateByID(string id) {

}

void MajorService::deleteByID(string id) {

}
