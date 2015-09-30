/*
  ==============================================================================

    MainComponent.cpp
    Created: 29 Sep 2015 8:51:25pm
    Author:  super

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
	setSize(400, 300);
}

MainComponent::~MainComponent()
{
}

void MainComponent::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

	//Set the fill color to our private variable
	//This is updated every time the variable is updated
	g.fillAll(currentColorHSVC);
	g.setColour(Colours::black);
	g.setFont(20.0f);
	g.drawText(currentSizeAsString, getLocalBounds(), Justification::centred, true);
	
}

void MainComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
	
	currentSizeAsString = String(getWidth()) + " x " + String(getHeight());
	
	//We want the color to incriment by 1 pretty slowly. 
	//90,000 is roughly equal to a 300x300 pixel window.
	float tempcolor = ( (float)(getWidth() * (float)getHeight()) / 90000.0);
	
	//The first operator is the hue from 0 to 1 in HSVC. So modulating that should result in
	//the background cycling through the rainbow
	currentColorHSVC = juce::Colour((float)(tempcolor), (float)1.0, (float)1.0, (float)1.0);

}
