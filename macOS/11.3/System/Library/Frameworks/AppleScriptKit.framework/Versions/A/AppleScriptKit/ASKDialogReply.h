/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppleScriptKit.framework/Versions/A/AppleScriptKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ASKDialogReply : NSObject {

	NSString* _buttonReturned;
	NSString* _textReturned;
	char _gaveUp;

}
+(id)replyWithButtonReturned:(id)arg1 textReturned:(id)arg2 gaveUp:(char)arg3 ;
-(void)dealloc;
-(id)buttonReturned;
-(id)textReturned;
-(char)gaveUp;
-(id)initWithButtonReturned:(id)arg1 textReturned:(id)arg2 gaveUp:(char)arg3 ;
@end

