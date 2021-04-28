/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Accounts.framework/Versions/A/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACProtobufCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface ACDataclassAction : NSObject <ACProtobufCoding, NSSecureCoding> {

	char _isDestructive;
	long long _type;
	NSArray* _affectedContainers;
	NSString* _undoAlertTitle;
	NSString* _undoAlertMessage;

}

@property (getter=_isError,readonly) char _error; 
@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char isDestructive;                        //@synthesize isDestructive=_isDestructive - In the implementation block
@property (nonatomic,readonly) NSArray * affectedContainers;              //@synthesize affectedContainers=_affectedContainers - In the implementation block
@property (nonatomic,retain) NSString * undoAlertTitle;                   //@synthesize undoAlertTitle=_undoAlertTitle - In the implementation block
@property (nonatomic,retain) NSString * undoAlertMessage;                 //@synthesize undoAlertMessage=_undoAlertMessage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)destructiveActionWithType:(long long)arg1 ;
+(id)destructiveActionWithType:(long long)arg1 affectedContainers:(id)arg2 ;
+(char)supportsSecureCoding;
+(id)actionWithType:(long long)arg1 ;
+(id)_actionForError:(id)arg1 ;
-(id)_initWithProtobuf:(id)arg1 ;
-(id)_encodeProtobuf;
-(id)_initWithProtobufData:(id)arg1 ;
-(id)_encodeProtobufData;
-(void)setUndoAlertTitle:(NSString *)arg1 ;
-(void)setUndoAlertMessage:(NSString *)arg1 ;
-(NSArray *)affectedContainers;
-(NSString *)undoAlertTitle;
-(NSString *)undoAlertMessage;
-(id)initWithType:(long long)arg1 destructivity:(char)arg2 affectedContainers:(id)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(char)isDestructive;
-(char)_isError;
@end
