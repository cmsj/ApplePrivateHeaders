/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/Versions/A/iAdServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, ADMRAIDAction, NSNumber, NSArray;

@interface ADAdActionPublicAttributes : NSObject <NSSecureCoding> {

	char _actionLeavesApplication;
	char _actionViewControllerHidesStatusBar;
	int _action;
	int _transitionType;
	unsigned long long _actionViewControllerPresentationOrientationMask;
	NSString* _actionURLString;
	ADMRAIDAction* _MRAIDAction;
	NSNumber* _adamIdentifier;
	NSArray* _iTunesMetadata;
	NSString* _calendarEventIdentifier;

}

@property (assign,nonatomic) char actionLeavesApplication;                                                    //@synthesize actionLeavesApplication=_actionLeavesApplication - In the implementation block
@property (assign,nonatomic) int action;                                                                      //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) unsigned long long actionViewControllerPresentationOrientationMask;              //@synthesize actionViewControllerPresentationOrientationMask=_actionViewControllerPresentationOrientationMask - In the implementation block
@property (assign,nonatomic) char actionViewControllerHidesStatusBar;                                         //@synthesize actionViewControllerHidesStatusBar=_actionViewControllerHidesStatusBar - In the implementation block
@property (assign,nonatomic) int transitionType;                                                              //@synthesize transitionType=_transitionType - In the implementation block
@property (nonatomic,copy) NSString * actionURLString;                                                        //@synthesize actionURLString=_actionURLString - In the implementation block
@property (nonatomic,copy) ADMRAIDAction * MRAIDAction;                                                       //@synthesize MRAIDAction=_MRAIDAction - In the implementation block
@property (nonatomic,copy) NSNumber * adamIdentifier;                                                         //@synthesize adamIdentifier=_adamIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * iTunesMetadata;                                                          //@synthesize iTunesMetadata=_iTunesMetadata - In the implementation block
@property (nonatomic,copy) NSString * calendarEventIdentifier;                                                //@synthesize calendarEventIdentifier=_calendarEventIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)action;
-(NSArray *)iTunesMetadata;
-(void)setAction:(int)arg1 ;
-(NSString *)actionURLString;
-(NSNumber *)adamIdentifier;
-(void)setAdamIdentifier:(NSNumber *)arg1 ;
-(id)_actionDescription;
-(void)setITunesMetadata:(NSArray *)arg1 ;
-(int)transitionType;
-(void)setActionURLString:(NSString *)arg1 ;
-(char)actionLeavesApplication;
-(void)setMRAIDAction:(ADMRAIDAction *)arg1 ;
-(ADMRAIDAction *)MRAIDAction;
-(void)setActionLeavesApplication:(char)arg1 ;
-(unsigned long long)actionViewControllerPresentationOrientationMask;
-(char)actionViewControllerHidesStatusBar;
-(void)setTransitionType:(int)arg1 ;
-(NSString *)calendarEventIdentifier;
-(void)setActionViewControllerPresentationOrientationMask:(unsigned long long)arg1 ;
-(void)setActionViewControllerHidesStatusBar:(char)arg1 ;
-(void)setCalendarEventIdentifier:(NSString *)arg1 ;
@end

