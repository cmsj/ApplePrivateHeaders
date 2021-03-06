/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUJSModelObject.h>

@class NUSchema;

@interface NUJSSchemaObject : NUJSModelObject

@property (nonatomic,readonly) NUSchema * schema; 
@property (nonatomic,readonly) id<NUIdentifiable> item; 
+(id)JSValueWithSchema:(id)arg1 identifiableItem:(id)arg2 context:(id)arg3 ;
-(NUSchema *)schema;
-(id<NUIdentifiable>)item;
-(char)hasProperty:(id)arg1 ;
-(id)initWithModel:(id)arg1 representedObject:(id)arg2 context:(id)arg3 ;
-(id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
-(id)initWithWithSchema:(id)arg1 identifiableItem:(id)arg2 context:(id)arg3 ;
@end

