/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFRichText.h>

@interface MKSearchFoundationRichText : SFRichText {

	/*^block*/id _completionHandlers;

}

@property (nonatomic,copy) id completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
-(id)initWithString:(id)arg1 ;
-(id)completionHandlers;
-(void)setText:(id)arg1 ;
-(char)isRichTextResolved;
-(void)setCompletionHandlers:(id)arg1 ;
-(void)_invokeCompletionHandlers;
-(void)setFormattedTextPieces:(id)arg1 ;
-(id)initRichTextTitleWithMapItem:(id)arg1 resultsType:(unsigned long long)arg2 ;
-(void)loadRichTextWithCompletionHandler:(/*^block*/id)arg1 ;
@end

