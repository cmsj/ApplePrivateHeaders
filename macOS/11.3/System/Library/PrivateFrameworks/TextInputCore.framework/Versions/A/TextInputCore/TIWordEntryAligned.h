/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, TIWordEntry;

@interface TIWordEntryAligned : NSObject <NSSecureCoding> {

	char _isContinuousPathConversion;
	int _inSessionAlignmentConfidence;
	NSArray* _alignedKeyboardInputs;
	NSString* _expectedString;
	TIWordEntry* _originalWord;
	NSArray* _alignedTouches;

}

@property (nonatomic,retain) NSArray * alignedTouches;                      //@synthesize alignedTouches=_alignedTouches - In the implementation block
@property (nonatomic,retain) NSArray * alignedKeyboardInputs;               //@synthesize alignedKeyboardInputs=_alignedKeyboardInputs - In the implementation block
@property (nonatomic,copy) NSString * expectedString;                       //@synthesize expectedString=_expectedString - In the implementation block
@property (nonatomic,retain) TIWordEntry * originalWord;                    //@synthesize originalWord=_originalWord - In the implementation block
@property (assign,nonatomic) char isContinuousPathConversion;               //@synthesize isContinuousPathConversion=_isContinuousPathConversion - In the implementation block
@property (assign,nonatomic) int inSessionAlignmentConfidence;              //@synthesize inSessionAlignmentConfidence=_inSessionAlignmentConfidence - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isContinuousPathConversion;
-(NSArray *)alignedTouches;
-(NSArray *)alignedKeyboardInputs;
-(void)setAlignedKeyboardInputs:(NSArray *)arg1 ;
-(NSString *)expectedString;
-(void)setExpectedString:(NSString *)arg1 ;
-(TIWordEntry *)originalWord;
-(void)setOriginalWord:(TIWordEntry *)arg1 ;
-(void)setIsContinuousPathConversion:(char)arg1 ;
-(int)inSessionAlignmentConfidence;
-(void)setInSessionAlignmentConfidence:(int)arg1 ;
-(void)setAlignedTouches:(NSArray *)arg1 ;
@end

