/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSCollectionViewElement.h>
#import <SiriUI/SiriUIReusableView.h>

@class NSString, SiriUISnippetViewController;

@interface SiriUIReusableFooterView : NSView <NSCollectionViewElement, SiriUIReusableView>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * identifier; 
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController; 
+(id)reuseIdentifier;
+(id)elementKind;
+(double)defaultHeight;
-(char)isFlipped;
-(NSEdgeInsets)edgeInsets;
@end

