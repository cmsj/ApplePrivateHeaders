/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/TTMergeableUndoString.h>
#import <libobjc.A.dylib/CRCoding.h>

@class NSString;

@interface TTMergeableAttributedString : TTMergeableUndoString <CRCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)writingDirectionForAttribute:(int)arg1 ;
+(int)attributeForWritingDirection:(long long)arg1 ;
+(id)attributesForRun:(const AttributeRun*)arg1 ;
+(void)saveAttributesOfString:(id)arg1 toArchive:(String*)arg2 ;
+(void)saveAttributes:(id)arg1 toArchive:(AttributeRun*)arg2 ;
+(id)whitelistedTypingAttributes;
+(id)whitelistedAttributesForModel;
+(id)whitelistedAttributesForStyle;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)serialize;
-(id)initWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 string:(String*)arg2 ;
-(void)saveToArchive:(String*)arg1 ;
-(id)initWithCRCoder:(id)arg1 string:(const String*)arg2 ;
-(id)initWithArchive:(const String*)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(vector<TopoSubstring *, std::__1::allocator<TopoSubstring *>>*)arg3 timestamp:(id)arg4 ;
-(void)saveDeltaSinceTimestamp:(id)arg1 toArchive:(String*)arg2 ;
-(void)setAttributes:(id)arg1 substring:(TopoSubstring*)arg2 ;
-(char)attributesEqual:(id)arg1 toRange:(NSRange)arg2 modelEqual:(char*)arg3 ;
-(char)attributesEqual:(id)arg1 to:(id)arg2 modelEqual:(char*)arg3 ;
@end

