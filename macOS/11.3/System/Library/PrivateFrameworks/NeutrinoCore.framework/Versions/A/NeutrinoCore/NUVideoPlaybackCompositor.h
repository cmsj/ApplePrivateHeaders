/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUVideoCompositor.h>

@class NSString;

@interface NUVideoPlaybackCompositor : NUVideoCompositor {

	NSString* _label;

}

@property (nonatomic,copy) NSString * label;              //@synthesize label=_label - In the implementation block
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)fulfillVideoCompositionRequest:(id)arg1 ;
@end

