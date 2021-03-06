//
//  WelcomeAppDelegate.h
//  Welcome - PSArborTouch Example
//
//  Created by Ed Preston on 3/10/11.
//  Copyright 2011 Preston Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WelcomeViewController;

@interface WelcomeAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet WelcomeViewController *viewController;

@end
