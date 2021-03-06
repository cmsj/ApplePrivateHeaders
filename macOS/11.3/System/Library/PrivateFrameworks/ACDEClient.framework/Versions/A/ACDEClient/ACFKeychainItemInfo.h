/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ACDEClient.framework/Versions/A/ACDEClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ACDEClient/ACDEClient-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary, NSString, NSDate, NSData;

@interface ACFKeychainItemInfo : NSObject <NSCopying> {

	NSMutableDictionary* _attributeDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * attributeDictionary;              //@synthesize attributeDictionary=_attributeDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes; 
@property (nonatomic,retain) id classCode; 
@property (nonatomic,retain) NSString * accessGroup; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (nonatomic,retain) NSString * description; 
@property (nonatomic,retain) NSString * comment; 
@property (assign,nonatomic) unsigned long long creator; 
@property (assign,nonatomic) unsigned long long type; 
@property (nonatomic,retain) NSString * label; 
@property (nonatomic,retain) NSString * subject; 
@property (assign,nonatomic) char isInvisible; 
@property (assign,nonatomic) char isNegative; 
@property (nonatomic,retain) NSString * account; 
@property (nonatomic,retain) NSString * service; 
@property (nonatomic,retain) NSData * generic; 
@property (nonatomic,retain) id valueRef; 
@property (nonatomic,retain) id valueData; 
@property (nonatomic,retain) id valuePersistentRef; 
@property (assign,nonatomic) char isPermanent; 
@property (nonatomic,retain) id keyType; 
@property (nonatomic,retain) NSData * applicationTag; 
@property (nonatomic,copy) NSString * applicationTagString; 
@property (assign,nonatomic) void* accessibleType; 
@property (assign,nonatomic) char synchronizable; 
@property (retain) NSString * genericString; 
@property (assign) char returnData; 
@property (assign) char returnAttributes; 
@property (assign) char returnRef; 
@property (assign) char returnPersistentRef; 
@property (assign) unsigned long long returnLimit; 
+(id)keychainItemInfo;
+(id)keychainItemInfoWithAttributes:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSDictionary *)attributes;
-(void)dump;
-(id)classCode;
-(NSDate *)modificationDate;
-(id)keyType;
-(NSDate *)creationDate;
-(id)initWithAttributes:(id)arg1 ;
-(NSString *)service;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(id)valueData;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(NSMutableDictionary *)attributeDictionary;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setService:(NSString *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSString *)accessGroup;
-(void*)accessibleType;
-(void)setAccessGroup:(NSString *)arg1 ;
-(void)setAccessibleType:(void*)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(NSString *)comment;
-(void)setCreator:(unsigned long long)arg1 ;
-(unsigned long long)creator;
-(void)setDescription:(NSString *)arg1 ;
-(char)isNegative;
-(void)setIsNegative:(char)arg1 ;
-(char)synchronizable;
-(void)setSynchronizable:(char)arg1 ;
-(void)setValueData:(id)arg1 ;
-(char)isInvisible;
-(void)setReturnData:(char)arg1 ;
-(char)returnData;
-(NSData *)generic;
-(void)setGeneric:(NSData *)arg1 ;
-(void)setAttributeDictionary:(NSMutableDictionary *)arg1 ;
-(char)isSynchronizableAttributeAvaiable;
-(void)setApplicationTag:(NSData *)arg1 ;
-(NSData *)applicationTag;
-(void)setClassCode:(id)arg1 ;
-(void)setIsInvisible:(char)arg1 ;
-(void)setIsPermanent:(char)arg1 ;
-(char)isPermanent;
-(void)setKeyType:(id)arg1 ;
-(void)setApplicationTagString:(NSString *)arg1 ;
-(NSString *)applicationTagString;
-(void)setGenericString:(NSString *)arg1 ;
-(NSString *)genericString;
-(void)setValueRef:(id)arg1 ;
-(id)valueRef;
-(void)setValuePersistentRef:(id)arg1 ;
-(id)valuePersistentRef;
-(void)setReturnAttributes:(char)arg1 ;
-(char)returnAttributes;
-(void)setReturnRef:(char)arg1 ;
-(char)returnRef;
-(void)setReturnPersistentRef:(char)arg1 ;
-(char)returnPersistentRef;
-(void)setReturnLimit:(unsigned long long)arg1 ;
-(unsigned long long)returnLimit;
@end

