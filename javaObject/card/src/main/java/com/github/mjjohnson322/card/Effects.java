/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.github.mjjohnson322.card;

import java.util.LinkedList;

/**
 *
 * @author Marcus
 */
public class Effects extends LinkedList<Effect>{
    void addEffect(String effect){
        this.add(new Effect(effect));
    }
}
