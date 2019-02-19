/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.github.mjjohnson322.card;

/**
 *
 * @author Marcus
 */
public class Card {
    String cardName;
    String cardType;
    int atk;
    int def;
    Effects effects = new Effects();
    Card(String name, String type){
        cardName=name;
        cardType=type;
        atk=0;
        def=0;
    }
    void addEffect(String effect){
        effects.addEffect(effect);
    }
}
