/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/Versions/A/IMSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class NSString, NSTextField, NSImageView;

@interface IMGroupAcknowledgementPollSectionView : NSView {

	unsigned long long _acknowledgementType;
	NSString* _acknowledgmentImageFormat;
	NSTextField* _talliedCountLabel;
	NSImageView* _acknowledgementTypeIcon;

}

@property (assign,nonatomic,__weak) NSTextField * talliedCountLabel;                    //@synthesize talliedCountLabel=_talliedCountLabel - In the implementation block
@property (assign,nonatomic,__weak) NSImageView * acknowledgementTypeIcon;              //@synthesize acknowledgementTypeIcon=_acknowledgementTypeIcon - In the implementation block
@property (assign,nonatomic) unsigned long long talliedCount; 
@property (assign,nonatomic) unsigned long long acknowledgementType;                    //@synthesize acknowledgementType=_acknowledgementType - In the implementation block
@property (copy) NSString * acknowledgmentImageFormat;                                  //@synthesize acknowledgmentImageFormat=_acknowledgmentImageFormat - In the implementation block
-(NSTextField *)talliedCountLabel;
-(NSString *)acknowledgmentImageFormat;
-(NSImageView *)acknowledgementTypeIcon;
-(unsigned long long)talliedCount;
-(void)setTalliedCount:(unsigned long long)arg1 ;
-(void)setAcknowledgementType:(unsigned long long)arg1 ;
-(unsigned long long)acknowledgementType;
-(void)setAcknowledgmentImageFormat:(NSString *)arg1 ;
-(void)setTalliedCountLabel:(NSTextField *)arg1 ;
-(void)setAcknowledgementTypeIcon:(NSImageView *)arg1 ;
@end

