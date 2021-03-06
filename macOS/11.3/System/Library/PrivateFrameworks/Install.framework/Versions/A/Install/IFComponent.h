/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Install/Install-Structs.h>
@interface IFComponent : NSObject {

	IFComponent_Private* _private;

}
+(void)initialize;
+(id)types;
+(id)type;
+(id)componentForNSXMLElementRepresentation:(id)arg1 ;
+(id)componentForFilesystemPath:(id)arg1 ;
+(id)componentForPatchingUsingNode:(id)arg1 inPlan:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)hash;
-(id)identifier;
-(id)path;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setPath:(id)arg1 ;
-(id)versionString;
-(id)attributeForKey:(id)arg1 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)actions;
-(void)addAttributesFromDictionary:(id)arg1 ;
-(void)addActions:(id)arg1 ;
-(void)addAction:(id)arg1 ;
-(id)subComponents;
-(void)addSubComponent:(id)arg1 ;
-(id)fullPath;
-(char)isEqualToComponent:(id)arg1 ;
-(id)initWithFilesystemPath:(id)arg1 ;
-(id)initWithNSXMLElement:(id)arg1 ;
-(id)parentComponent;
-(id)ingoredAttributeTypes;
-(id)subComponentAtSubPath:(id)arg1 ;
-(char)updateWithNSXMLElementRepresentation:(id)arg1 ;
-(void)setParentComponent:(id)arg1 ;
-(id)componentLineage;
-(id)initWithIdentifier:(id)arg1 andAttributes:(id)arg2 ;
@end

