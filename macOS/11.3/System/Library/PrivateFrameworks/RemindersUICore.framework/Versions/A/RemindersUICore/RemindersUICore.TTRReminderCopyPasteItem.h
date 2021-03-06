/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RemindersUICore.framework/Versions/A/RemindersUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSPasteboardWriting.h>
#import <libobjc.A.dylib/NSPasteboardReading.h>

@interface RemindersUICore.TTRReminderCopyPasteItem : NSObject <NSSecureCoding, NSPasteboardWriting, NSPasteboardReading> {

	 metadata;
	 storages;
	 titles;

}
+(char)supportsSecureCoding;
+(id)readableTypesForPasteboard:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2 ;
-(id)writableTypesForPasteboard:(id)arg1 ;
-(id)pasteboardPropertyListForType:(id)arg1 ;
-(id)init;
@end

