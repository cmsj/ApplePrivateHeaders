/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/Versions/A/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString;

@interface TRIFactor : TRIPBMessage

@property (nonatomic,copy) NSString * id_p; 
@property (assign,nonatomic) char hasId_p; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) char hasName; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int namespaceId; 
@property (assign,nonatomic) char hasNamespaceId; 
@property (nonatomic,copy) NSString * namespaceName; 
@property (assign,nonatomic) char hasNamespaceName; 
+(id)descriptor;
-(id)typeString;
-(id)namespaceString;
-(char)hasNamespace;
-(char)isInNamespaceName:(id)arg1 ;
@end
