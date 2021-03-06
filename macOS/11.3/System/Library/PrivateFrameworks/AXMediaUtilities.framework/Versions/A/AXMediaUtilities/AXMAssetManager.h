/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXMAssetManager : NSObject
+(id)defaultManager;
-(id)_modelsDirectoryForType:(unsigned long long)arg1 compiled:(char)arg2 ;
-(id)_photoCaptionAssetsDirectory;
-(id)_modelAssetURLsOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2 compiled:(char)arg3 ;
-(id)_modelAssetNamesOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2 compiled:(char)arg3 ;
-(id)_modelAssetURLForModelNamed:(id)arg1 ofType:(unsigned long long)arg2 sources:(unsigned long long)arg3 compiled:(char)arg4 ;
-(id)compiledModelAssetURLForModelNamed:(id)arg1 ofType:(unsigned long long)arg2 sources:(unsigned long long)arg3 ;
-(id)uncompiledModelAssetURLForModelNamed:(id)arg1 ofType:(unsigned long long)arg2 sources:(unsigned long long)arg3 ;
-(id)_compiledModelsDirectoryForType:(unsigned long long)arg1 ;
-(id)_uncompiledModelsDirectoryForType:(unsigned long long)arg1 ;
-(id)compiledModelAssetURLsOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2 ;
-(id)uncompiledModelAssetURLsOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2 ;
-(id)compiledModelAssetNamesOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2 ;
-(id)uncompiledModelAssetNamesOfType:(unsigned long long)arg1 sources:(unsigned long long)arg2 ;
-(id)modelWithName:(id)arg1 ofType:(unsigned long long)arg2 sources:(unsigned long long)arg3 compileIfNeeded:(char)arg4 persistCompiledModel:(char)arg5 error:(id*)arg6 ;
@end

