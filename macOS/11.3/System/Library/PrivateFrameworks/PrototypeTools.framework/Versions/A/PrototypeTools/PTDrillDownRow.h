/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/Versions/A/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRow.h>

@class PTSettings, NSString;

@interface PTDrillDownRow : PTSRow {

	PTSettings* _childSettings;
	NSString* _childKeyPath;

}

@property (nonatomic,readonly) NSString * childKeyPath;              //@synthesize childKeyPath=_childKeyPath - In the implementation block
+(char)supportsSecureCoding;
+(id)rowWithTitle:(id)arg1 childSettingsKeyPath:(id)arg2 ;
+(id)rowWithTitleKeyPath:(id)arg1 childSettingsKeyPath:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(void)setSettings:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(id)initWithChildKeyPath:(id)arg1 ;
-(NSString *)childKeyPath;
@end

