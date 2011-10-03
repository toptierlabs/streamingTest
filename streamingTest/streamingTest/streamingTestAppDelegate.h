//
//  streamingTestAppDelegate.h
//  streamingTest
//
//  Created by fernando colman on 10/3/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class streamingTestViewController;

@interface streamingTestAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet streamingTestViewController *viewController;

@end
