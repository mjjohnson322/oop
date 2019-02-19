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
    private String cardName;
    private String cardType;
    private int atk;
    private int def;
    private Effects effects = new Effects();
    Card(String name, String type){
        cardName=name;
        cardType=type;
        atk=0;
        def=0;
    }
    public void addEffect(String effect){
        effects.addEffect(effect);
    }
    public void setAtk(int _atk){
        atk=_atk;
    }
    public void setDef(int _def){
        def=_def;
    }
    public int getAtk(){
        return atk;
    }
    public int getDef(){
        return def;
    }
    public Effects getEffects(){
        return effects;
    }
}
