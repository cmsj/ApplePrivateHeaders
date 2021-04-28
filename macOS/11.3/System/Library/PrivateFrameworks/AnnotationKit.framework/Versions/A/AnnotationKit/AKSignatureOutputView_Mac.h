/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/Versions/A/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AppKit/NSView.h>

@class AKSignature;

@interface AKSignatureOutputView_Mac : NSView {

	char _showsOutput;
	AKSignature* _signature;

}

@property (assign) char showsOutput;                             //@synthesize showsOutput=_showsOutput - In the implementation block
@property (nonatomic,copy) AKSignature * signature;              //@synthesize signature=_signature - In the implementation block
-(AKSignature *)signature;
-(void)drawRect:(CGRect)arg1 ;
-(void)awakeFromNib;
-(void)setSignature:(AKSignature *)arg1 ;
-(void)setShowsOutput:(char)arg1 ;
-(void)showsOutput:(char)arg1 ;
-(char)showsOutput;
@end
