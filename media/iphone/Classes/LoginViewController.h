//
//  LoginViewController.h
//  NewsBlur
//
//  Created by Samuel Clay on 10/31/10.
//  Copyright 2010 NewsBlur. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NewsBlurAppDelegate.h"
#import "ASIHTTPRequest.h"

#define LANDSCAPE_MARGIN 128

@class NewsBlurAppDelegate;

@interface LoginViewController : UIViewController 
<ASIHTTPRequestDelegate> {
    NewsBlurAppDelegate *appDelegate;
    
    BOOL isOnSignUpScreen;
    UITextField *usernameInput;
    UITextField *passwordInput;
    UITextField *emailInput;
    NSMutableData * jsonString;
    
    UIActivityIndicatorView *activityIndicator;
    UILabel *authenticatingLabel;
    UILabel *errorLabel;
    UISegmentedControl *loginControl;
    
    UILabel *usernameLabel;
    UILabel *usernameOrEmailLabel;
    UILabel *passwordLabel;
    UILabel *emailLabel;
    UILabel *passwordOptionalLabel;
}

- (void)checkPassword;
- (void)registerAccount;
- (IBAction)selectLoginSignup;

- (IBAction)selectSignUp;
- (IBAction)selectLogin;
- (IBAction)tapLoginButton;
- (IBAction)tapSignUpButton;


- (void)animateLoop;

@property (nonatomic, retain) IBOutlet NewsBlurAppDelegate *appDelegate;

@property (nonatomic, retain) IBOutlet UITextField *usernameInput;
@property (nonatomic, retain) IBOutlet UITextField *passwordInput;
@property (nonatomic, retain) IBOutlet UITextField *emailInput;
@property (retain, nonatomic) IBOutlet UITextField *signUpUsernameInput;
@property (retain, nonatomic) IBOutlet UITextField *signUpPasswordInput;
@property (retain, nonatomic) IBOutlet UIButton *selectSignUpButton;
@property (retain, nonatomic) IBOutlet UIButton *selectLoginButton;

@property (retain, nonatomic) IBOutlet UIView *signUpView;
@property (retain, nonatomic) IBOutlet UIView *logInView;

@property (nonatomic, retain) NSMutableData * jsonString;
@property (nonatomic, retain) IBOutlet UILabel *errorLabel;
@property (nonatomic, retain) IBOutlet UISegmentedControl *loginControl;

@property (nonatomic, retain) IBOutlet UILabel *usernameLabel;
@property (nonatomic, retain) IBOutlet UILabel *usernameOrEmailLabel;
@property (nonatomic, retain) IBOutlet UILabel *passwordLabel;
@property (nonatomic, retain) IBOutlet UILabel *emailLabel;
@property (nonatomic, retain) IBOutlet UILabel *passwordOptionalLabel;

@end
