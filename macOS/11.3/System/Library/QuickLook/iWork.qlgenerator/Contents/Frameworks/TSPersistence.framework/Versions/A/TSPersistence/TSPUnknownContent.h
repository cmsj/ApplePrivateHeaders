/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSPersistence/TSPersistence-Structs.h>
@class NSArray;

@interface TSPUnknownContent : NSObject {

	NSArray* _preserveMessages;
	NSArray* _preserveUntilModifiedMessages;
	NSArray* _preserveFields;
	NSArray* _preserveUntilModifiedFields;

}
+(char)unknownContent:(id)arg1 hasSameUnknownFieldsAsUnknownContent:(id)arg2 messagePrototype:(const Message*)arg3 ;
-(id)init;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)willModifyObject;
-(id)newUnknownContentSnapshot;
-(id)initWithMessages:(id)arg1 messagesAreDiffs:(char)arg2 preserveFields:(id)arg3 preserveUntilModifiedFields:(id)arg4 ;
-(char)hasSameUnknownFieldsAsUnknownContent:(id)arg1 messagePrototype:(const Message*)arg2 ;
@end

