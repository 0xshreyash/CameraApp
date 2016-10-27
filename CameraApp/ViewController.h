//
//  ViewController.h
//  CameraApp
//
//  Created by Shreyash Patodia on 27/10/16.
//  Copyright © 2016 shreyash. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
@property (strong, nonatomic) IBOutlet UIImageView *imageView;
- (IBAction)takePhoto:(id)sender;
- (IBAction)library:(id)sender;

@end

