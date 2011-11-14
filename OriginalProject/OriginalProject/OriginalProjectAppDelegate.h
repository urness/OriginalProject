//
//  OriginalProjectAppDelegate.h
//  OriginalProject
//
//  Created by Timothy Urness on 11/14/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OriginalProjectViewController;

@interface OriginalProjectAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet OriginalProjectViewController *viewController;

@end
