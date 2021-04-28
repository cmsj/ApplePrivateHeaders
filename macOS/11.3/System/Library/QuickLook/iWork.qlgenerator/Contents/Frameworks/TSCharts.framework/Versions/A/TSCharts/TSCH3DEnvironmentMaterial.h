/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DTexturesMaterial.h>

@interface TSCH3DEnvironmentMaterial : TSCH3DTexturesMaterial {

	char _decalMode;

}

@property (assign,nonatomic) char decalMode;              //@synthesize decalMode=_decalMode - In the implementation block
+(id)instanceWithArchive:(const Chart3DEnvironmentMaterialArchive*)arg1 unarchiver:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithArchive:(const Chart3DEnvironmentMaterialArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(Chart3DEnvironmentMaterialArchive*)arg1 archiver:(id)arg2 ;
-(char)decalMode;
-(id)defaultShaderVariables;
-(void)setDecalMode:(char)arg1 ;
@end
