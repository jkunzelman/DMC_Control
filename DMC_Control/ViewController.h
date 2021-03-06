//
//  ViewController.h
//  DMC_Control
//
//  Created by Jeff Kunzelman on 3/28/15.
//  Copyright (c) 2015 HardwareWeekend. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Relayr/Relayr.h>
#import <AVFoundation/AVFoundation.h>
@interface ViewController : UIViewController <AVAudioPlayerDelegate>

@property (weak, nonatomic) IBOutlet UILabel *fluxCapacitorTempLabel;
@property (weak, nonatomic) IBOutlet UILabel *xGeeLabel;
@property (weak, nonatomic) IBOutlet UILabel *yGeeLabel;
@property (weak, nonatomic) IBOutlet UILabel *zGeeLabel;
@property (weak, nonatomic) IBOutlet UILabel *acceleratorLabel;
@property (weak, nonatomic) IBOutlet UILabel *maxGlabel;
@property (weak, nonatomic) IBOutlet UILabel *xSpeedLabel;
@property (weak, nonatomic) IBOutlet UILabel *ySpeedLabel;
@property (weak, nonatomic) IBOutlet UILabel *zSpeedLabel;
@property (weak, nonatomic) IBOutlet UIView *buttonBackgroundView;
@property (weak, nonatomic) IBOutlet UIView *relayerBackgroundView;

///The last read flux capacitor temp. Use [fluxCapacitor floadValue] for float or other NSNumber methods for primative types
@property (strong, nonatomic) NSNumber *fluxCapacitorTemp;
///The last read x acceleration in G's. Use [xGforce floadValue] for float or other NSNumber methods for primative types
@property (strong, nonatomic) NSNumber *xGforce;
///The last x max acceleration in G's. Use [xGforceMax floadValue] for float or other NSNumber methods for primative types
@property (strong, nonatomic) NSNumber *xGforceMax;
///The last read x acceleration in G's. Use [yGforce floadValue] for float or other NSNumber methods for primative types
@property (strong, nonatomic) NSNumber *yGforce;
///The max y acceleration in G's. Use [yGforceMax floadValue] for float or other NSNumber methods for primative types
@property (strong, nonatomic) NSNumber *yGforceMax;
///The last read x acceleration in G's. Use [zGforce floadValue] for float or other NSNumber methods for primative types
@property (strong, nonatomic) NSNumber *zGforce;
///The max x acceleration in G's. Use [zGforceMax floadValue] for float or other NSNumber methods for primative types
@property (strong, nonatomic) NSNumber *zGforceMax;
///The max acceleration in G's for any axis. Use [maxGforce floadValue] for float or other NSNumber methods for primative types
@property (strong, nonatomic) NSNumber *maxGforce;

@property (strong, nonatomic) NSNumber *xSpeed;
@property (strong, nonatomic) NSNumber *ySpeed;
@property (strong, nonatomic) NSNumber *zSpeed;


@property (weak, nonatomic) IBOutlet UIButton *alarmButton;

- (IBAction)alarmButtonAction:(id)sender;
- (IBAction)resetButton:(id)sender;
  
@end

