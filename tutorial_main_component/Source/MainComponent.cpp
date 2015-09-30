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
	g.fillAll(Colours::lightblue);
	g.setColour(Colours::darkblue);
	g.setFont(20.0f);
	g.drawText("Hello, World!", getLocalBounds(), Justification::centred, true);
	
}

void MainComponent::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
