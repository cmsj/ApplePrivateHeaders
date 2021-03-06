/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSValue;

@interface NSLegacyFilePromiseProvider : NSObject {

	char _isPromiseValid;
	NSArray* _filePromiseProviders;
	NSValue* _weakPasteboard;

}

@property (copy) NSArray * filePromiseProviders;              //@synthesize filePromiseProviders=_filePromiseProviders - In the implementation block
-(void)dealloc;
-(id)initWithPasteboard:(id)arg1 ;
-(void)draggingEnded:(id)arg1 ;
-(void)setFilePromiseProviders:(NSArray *)arg1 ;
-(void)draggingCancelled:(id)arg1 ;
-(void)pasteboard:(id)arg1 provideDataForType:(id)arg2 ;
-(void)pasteboardFinishedWithDataProvider:(id)arg1 ;
-(NSArray *)filePromiseProviders;
@end

