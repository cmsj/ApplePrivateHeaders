/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/Versions/A/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupportUI/NUIContainerGridView.h>

@class NSMutableArray;

@interface TLKKeyValueGridView : NUIContainerGridView {

	NSMutableArray* _keyLabels;
	NSMutableArray* _valueLabels;

}

@property (nonatomic,retain) NSMutableArray * keyLabels;                //@synthesize keyLabels=_keyLabels - In the implementation block
@property (nonatomic,retain) NSMutableArray * valueLabels;              //@synthesize valueLabels=_valueLabels - In the implementation block
-(id)init;
-(void)updateWithTuples:(id)arg1 valueColumnIsTrailing:(char)arg2 truncateKey:(char)arg3 ;
-(NSMutableArray *)keyLabels;
-(void)setKeyLabels:(NSMutableArray *)arg1 ;
-(void)setValueLabels:(NSMutableArray *)arg1 ;
-(NSMutableArray *)valueLabels;
@end

