/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@class NSString;

@interface RLMProperty : NSObject {

	int _type;
	objc_ivarRef _swiftIvar;
	char _indexed;
	char _optional;
	char _array;
	char _isPrimary;
	NSString* _name;
	NSString* _objectClassName;
	NSString* _linkOriginPropertyName;
	NSString* _columnName;
	unsigned long long _index;
	NSString* _getterName;
	NSString* _setterName;
	SEL _getterSel;
	SEL _setterSel;

}

@property (nonatomic,retain) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int type;                                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char indexed;                                          //@synthesize indexed=_indexed - In the implementation block
@property (assign,nonatomic) char optional;                                         //@synthesize optional=_optional - In the implementation block
@property (nonatomic,copy) NSString * objectClassName;                              //@synthesize objectClassName=_objectClassName - In the implementation block
@property (nonatomic,retain) NSString * columnName;                                 //@synthesize columnName=_columnName - In the implementation block
@property (assign,nonatomic) unsigned long long index;                              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) char isPrimary;                                        //@synthesize isPrimary=_isPrimary - In the implementation block
@property (assign,nonatomic) objc_ivarRef swiftIvar;                                //@synthesize swiftIvar=_swiftIvar - In the implementation block
@property (nonatomic,copy) NSString * getterName;                                   //@synthesize getterName=_getterName - In the implementation block
@property (nonatomic,copy) NSString * setterName;                                   //@synthesize setterName=_setterName - In the implementation block
@property (assign,nonatomic) SEL getterSel;                                         //@synthesize getterSel=_getterSel - In the implementation block
@property (assign,nonatomic) SEL setterSel;                                         //@synthesize setterSel=_setterSel - In the implementation block
@property (nonatomic,copy,readonly) NSString * linkOriginPropertyName;              //@synthesize linkOriginPropertyName=_linkOriginPropertyName - In the implementation block
@property (nonatomic,readonly) char array;                                          //@synthesize array=_array - In the implementation block
+(id)propertyForObjectStoreProperty:(const Property*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)setType:(int)arg1 ;
-(int)type;
-(char)array;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(char)optional;
-(char)isPrimary;
-(void)setIsPrimary:(char)arg1 ;
-(char)indexed;
-(char)isEqualToProperty:(id)arg1 ;
-(NSString *)objectClassName;
-(void)setObjectClassName:(NSString *)arg1 ;
-(void)setOptional:(char)arg1 ;
-(NSString *)columnName;
-(objc_ivarRef)swiftIvar;
-(void)setIndexed:(char)arg1 ;
-(id)initSwiftPropertyWithName:(id)arg1 indexed:(char)arg2 linkPropertyDescriptor:(id)arg3 property:(objc_propertyRef)arg4 instance:(id)arg5 ;
-(id)initWithName:(id)arg1 indexed:(char)arg2 linkPropertyDescriptor:(id)arg3 property:(objc_propertyRef)arg4 ;
-(void)setColumnName:(NSString *)arg1 ;
-(id)initSwiftListPropertyWithName:(id)arg1 instance:(id)arg2 ;
-(id)initSwiftLinkingObjectsPropertyWithName:(id)arg1 ivar:(objc_ivarRef)arg2 objectClassName:(id)arg3 linkOriginPropertyName:(id)arg4 ;
-(id)initSwiftOptionalPropertyWithName:(id)arg1 indexed:(char)arg2 ivar:(objc_ivarRef)arg3 propertyType:(int)arg4 ;
-(Property)objectStoreCopy:(id)arg1 ;
-(id)initWithName:(id)arg1 type:(int)arg2 objectClassName:(id)arg3 linkOriginPropertyName:(id)arg4 indexed:(char)arg5 optional:(char)arg6 ;
-(void)updateAccessors;
-(void)parseObjcProperty:(objc_propertyRef)arg1 readOnly:(BOOL*)arg2 computed:(BOOL*)arg3 rawType:(id*)arg4 ;
-(char)setTypeFromRawType:(id)arg1 ;
-(NSString *)linkOriginPropertyName;
-(id)copyWithNewName:(id)arg1 ;
-(void)setSwiftIvar:(objc_ivarRef)arg1 ;
-(NSString *)getterName;
-(void)setGetterName:(NSString *)arg1 ;
-(NSString *)setterName;
-(void)setSetterName:(NSString *)arg1 ;
-(SEL)getterSel;
-(void)setGetterSel:(SEL)arg1 ;
-(SEL)setterSel;
-(void)setSetterSel:(SEL)arg1 ;
@end

