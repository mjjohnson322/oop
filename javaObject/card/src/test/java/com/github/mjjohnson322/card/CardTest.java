/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.github.mjjohnson322.card;

import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;
import static org.junit.Assert.*;

/**
 *
 * @author Marcus
 */
public class CardTest {
    
    public CardTest() {
    }
    
    @BeforeClass
    public static void setUpClass() {
    }
    
    @AfterClass
    public static void tearDownClass() {
    }
    
    @Before
    public void setUp() {
    }
    
    @After
    public void tearDown() {
    }

    /**
     * Test of addEffect method, of class Card.
     */
    @Test
    public void testAddEffect() {
        System.out.println("addEffect");
        String effect = "trample";
        Card instance = new Card("name", "creature");
        instance.addEffect(effect);
        assert(instance.getEffects().get(0).getEffect()==effect);
        // TODO review the generated test code and remove the default call to fail.
        //fail("The test case is a prototype.");
    }

    /**
     * Test of setAtk method, of class Card.
     */
    @Test
    public void testSetAtk() {
        System.out.println("setAtk");
        int _atk = 1000;
        Card instance = new Card("name", "creature");
        instance.setAtk(_atk);
        assert(instance.getAtk()==_atk);
        // TODO review the generated test code and remove the default call to fail.
        //fail("The test case is a prototype.");
    }

    /**
     * Test of setDef method, of class Card.
     */
    @Test
    public void testSetDef() {
        System.out.println("setDef");
        int _def = 1000;
        Card instance = new Card("name", "creature");
        instance.setDef(_def);
        assert(instance.getDef()==_def);
        // TODO review the generated test code and remove the default call to fail.
        //fail("The test case is a prototype.");
    }

    /**
     * Test of getAtk method, of class Card.
     */
    @Test
    public void testGetAtk() {
        System.out.println("getAtk");
        Card instance = new Card("name", "creature");
        int expResult = 0;
        int result = instance.getAtk();
        assertEquals(expResult, result);
        // TODO review the generated test code and remove the default call to fail.
        //fail("The test case is a prototype.");
    }

    /**
     * Test of getDef method, of class Card.
     */
    @Test
    public void testGetDef() {
        System.out.println("getDef");
        Card instance = new Card("name", "creature");
        int expResult = 0;
        int result = instance.getDef();
        assertEquals(expResult, result);
        // TODO review the generated test code and remove the default call to fail.
        //fail("The test case is a prototype.");
    }

    /**
     * Test of getEffects method, of class Card.
     */
    @Test
    public void testGetEffects() {
        System.out.println("getEffects");
        Card instance = new Card("name", "creature");
        Effects expResult = new Effects();
        Effects result = instance.getEffects();
        assertEquals(expResult, result);
        // TODO review the generated test code and remove the default call to fail.
        
    }
    
}
