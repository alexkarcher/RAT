/*
  ==============================================================================

    MainComponent.h
    Created: 29 Sep 2015 8:51:25pm
    Author:  super

  ==============================================================================
*/

#ifndef MAINCOMPONENT_H_INCLUDED
#define MAINCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class MainComponent    : public Component
{
public:
    MainComponent();
    ~MainComponent();

	/*Note:	Always add the keyword override to all functions in a class that should override
			a function from a base class. This prevents unexpected errors in your app, and 
			is part of the JUCE coding standards.*/

    void paint (Graphics&) override;
		/*this member function determines how your component should be drawn on the screen, 
		and must be implemented for every component class.*/
    
	void resized() override;
		/* this member function determines what should happen to your component when it is
		resized, and should be implemented for every component class (except if you are 
		sure that this component will never be resizeable in you app).*/

private:

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainComponent)
	
	//Declare some private variables to be used when resizing the window	
	String currentSizeAsString;
	juce::Colour currentColorHSVC;
};


#endif  // MAINCOMPONENT_H_INCLUDED
