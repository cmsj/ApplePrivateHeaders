/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSArray;

@interface WDAAnchor : NSObject {

	CGRect mBounds;
	int mTextWrappingMode;
	int mTextWrappingModeType;
	NSArray* mTextWrapPoints;
	double mWrapDistanceLeft;
	double mWrapDistanceTop;
	double mWrapDistanceRight;
	double mWrapDistanceBottom;
	int mHorizontalPosition;
	int mRelativeHorizontalPosition;
	int mVerticalPosition;
	int mRelativeVerticalPosition;
	char mAllowOverlap;
	long long mZIndex;

}

@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) int textWrappingMode; 
@property (assign,nonatomic) int textWrappingModeType; 
@property (nonatomic,retain) NSArray * textWrapPoints; 
@property (assign,nonatomic) double wrapDistanceLeft; 
@property (assign,nonatomic) double wrapDistanceRight; 
@property (assign,nonatomic) double wrapDistanceTop; 
@property (assign,nonatomic) double wrapDistanceBottom; 
@property (assign,nonatomic) int horizontalPosition; 
@property (assign,nonatomic) int relativeHorizontalPosition; 
@property (assign,nonatomic) int verticalPosition; 
@property (assign,nonatomic) int relativeVerticalPosition; 
@property (assign,nonatomic) char allowOverlap; 
@property (assign,nonatomic) long long zIndex; 
+(id)stringForTextWrappingModeType:(int)arg1 ;
-(id)description;
-(id)init;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(void)setZIndex:(long long)arg1 ;
-(long long)zIndex;
-(int)relativeVerticalPosition;
-(int)textWrappingMode;
-(int)relativeHorizontalPosition;
-(int)horizontalPosition;
-(int)verticalPosition;
-(void)setVerticalPosition:(int)arg1 ;
-(void)setHorizontalPosition:(int)arg1 ;
-(void)setTextWrappingMode:(int)arg1 ;
-(int)textWrappingModeType;
-(void)setTextWrappingModeType:(int)arg1 ;
-(NSArray *)textWrapPoints;
-(void)setTextWrapPoints:(NSArray *)arg1 ;
-(double)wrapDistanceLeft;
-(void)setWrapDistanceLeft:(double)arg1 ;
-(double)wrapDistanceRight;
-(void)setWrapDistanceRight:(double)arg1 ;
-(double)wrapDistanceTop;
-(void)setWrapDistanceTop:(double)arg1 ;
-(double)wrapDistanceBottom;
-(void)setWrapDistanceBottom:(double)arg1 ;
-(void)setRelativeHorizontalPosition:(int)arg1 ;
-(void)setRelativeVerticalPosition:(int)arg1 ;
-(char)allowOverlap;
-(void)setAllowOverlap:(char)arg1 ;
@end

