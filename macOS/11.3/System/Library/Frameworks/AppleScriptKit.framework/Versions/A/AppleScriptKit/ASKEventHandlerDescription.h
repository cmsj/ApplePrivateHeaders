/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppleScriptKit.framework/Versions/A/AppleScriptKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface ASKEventHandlerDescription : NSObject <NSCoding> {

	NSString* _name;
	NSString* _commandName;
	NSString* _suiteName;
	NSString* _terminologyName;
	NSString* _terminologyParameters;
	NSString* _categoryName;
	NSString* _actionSelectorName;
	unsigned _eventClass;
	unsigned _eventID;
	Class _eventHandlerDelegateClass;
	Class _eventHandlerDataSourceClass;
	Class _eventHandlerClass;
	Class _eventHandlerImplementorClass;
	NSString* _notificationName;
	char _processOnLoad;

}
+(id)descriptionWithName:(id)arg1 dictionary:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(unsigned)eventClass;
-(unsigned)eventID;
-(id)suiteName;
-(id)commandName;
-(id)categoryName;
-(void)setCategoryName:(id)arg1 ;
-(id)notificationName;
-(void)setNotificationName:(id)arg1 ;
-(void)setEventID:(unsigned)arg1 ;
-(void)setSuiteName:(id)arg1 ;
-(id)initWithName:(id)arg1 dictionary:(id)arg2 ;
-(id)eventHandlerInstanceWithObject:(id)arg1 ;
-(char)processOnLoad;
-(Class)eventHandlerImplementorClass;
-(Class)eventHandlerDelegateClass;
-(Class)eventHandlerDataSourceClass;
-(char)isKindOfEventHandlerDescription:(id)arg1 ;
-(void)setCommandName:(id)arg1 ;
-(void)setActionSelectorName:(id)arg1 ;
-(void)setEventClass:(unsigned)arg1 ;
-(void)setTerminologyName:(id)arg1 ;
-(void)setTerminologyParameters:(id)arg1 ;
-(void)setEventHandlerDelegateClass:(Class)arg1 ;
-(void)setEventHandlerDataSourceClass:(Class)arg1 ;
-(void)setEventHandlerClass:(Class)arg1 ;
-(void)setEventHandlerImplementorClass:(Class)arg1 ;
-(void)setProcessOnLoad:(char)arg1 ;
-(Class)eventHandlerClass;
-(id)terminologyName;
-(id)terminologyParameters;
-(id)actionSelectorName;
-(id)eventHandlerInstance;
@end

