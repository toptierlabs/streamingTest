//
//  streamingTestViewController.h
//  streamingTest
//
//  Created by fernando colman on 10/3/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AudioStreamer;

@interface streamingTestViewController : UIViewController{
    IBOutlet UIButton *button;
    IBOutlet UISlider *progressSlider;
    IBOutlet UILabel *positionLabel;
    AudioStreamer *streamer;
    NSTimer *progressUpdateTimer;
    NSString *streamPath;
}

@property (nonatomic,retain) NSString *streamPath;

- (IBAction)buttonPressed:(id)sender;
- (void)spinButton;
- (void)updateProgress:(NSTimer *)aNotification;
- (IBAction)sliderMoved:(UISlider *)aSlider;

@end
