//
//  LoginProtocol.h
//  DGSPhone
//
//  Created by Justin Weiss on 6/21/10.
//  Copyright 2010 Justin Weiss. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol LoginProtocol

- (void)notLoggedIn;
- (void)loggedIn;
- (void)requestCancelled;

@end
