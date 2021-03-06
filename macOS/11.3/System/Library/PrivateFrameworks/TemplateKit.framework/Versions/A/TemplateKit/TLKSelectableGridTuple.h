/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/Versions/A/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKObject.h>

@class NSString;

@interface TLKSelectableGridTuple : TLKObject {

	NSString* _title;
	NSString* _subtitle;
	double _size;

}

@property (assign,nonatomic) double size;                      //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
+(id)tupleWithTitle:(id)arg1 subtitle:(id)arg2 ;
+(id)tuplesForTitles:(id)arg1 subtitles:(id)arg2 ;
-(double)size;
-(id)description;
-(void)setSize:(double)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
@end

