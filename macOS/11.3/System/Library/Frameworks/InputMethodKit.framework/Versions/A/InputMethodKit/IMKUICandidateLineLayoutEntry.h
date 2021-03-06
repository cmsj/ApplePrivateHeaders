/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InputMethodKit/InputMethodKit-Structs.h>
@class NSMutableArray, NSString, NSArray;

@interface IMKUICandidateLineLayoutEntry : NSObject {

	long long _alignment;
	NSMutableArray* _candidateItemsInternal;
	char _complete;
	unsigned long long _index;
	double _length;
	double _maxLength;
	NSString* _title;

}

@property (nonatomic,retain) NSMutableArray * candidateItemsInternal;              //@synthesize candidateItemsInternal=_candidateItemsInternal - In the implementation block
@property (assign,getter=isComplete,nonatomic) char complete;                      //@synthesize complete=_complete - In the implementation block
@property (assign,nonatomic) long long alignment;                                  //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) NSArray * candidateItems; 
@property (assign,nonatomic) unsigned long long index;                             //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) double length;                                        //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) double maxLength;                                     //@synthesize maxLength=_maxLength - In the implementation block
@property (readonly) char overflows; 
@property (nonatomic,readonly) double remainingLength; 
@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
-(NSMutableArray *)candidateItemsInternal;
-(double)remainingLength;
-(void)addCandidateItem:(id)arg1 preferredSize:(CGSize)arg2 ;
-(void)setCandidateItemsInternal:(NSMutableArray *)arg1 ;
-(double)length;
-(void)setLength:(double)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(char)isComplete;
-(long long)alignment;
-(NSString *)title;
-(void)setComplete:(char)arg1 ;
-(double)maxLength;
-(void)setMaxLength:(double)arg1 ;
-(NSArray *)candidateItems;
-(char)overflows;
@end

