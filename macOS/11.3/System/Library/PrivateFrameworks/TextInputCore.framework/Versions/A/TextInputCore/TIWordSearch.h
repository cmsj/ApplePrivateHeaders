/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/TIKeyboardActivityObserving.h>

@class TIInputMode, TIMecabraEnvironment, TIMecabraWrapper, TIWordSearchOperationGetCandidates, NSCache, NSString;

@interface TIWordSearch : NSObject <TIKeyboardActivityObserving> {

	id _userDictionaryObserver;
	id _dictionaryUpdateObserver;
	char _autoCorrects;
	char _shouldLearnAcceptedCandidate;
	TIInputMode* _inputMode;
	TIMecabraEnvironment* _mecabraEnvironment;
	TIMecabraWrapper* _mecabraWrapper;
	TIWordSearchOperationGetCandidates* _operation;
	NSCache* _candidatesCache;

}

@property (retain) TIWordSearchOperationGetCandidates * operation;                   //@synthesize operation=_operation - In the implementation block
@property (nonatomic,readonly) int mecabraLanguage; 
@property (retain) TIMecabraWrapper * mecabraWrapper;                                //@synthesize mecabraWrapper=_mecabraWrapper - In the implementation block
@property (nonatomic,retain) NSCache * candidatesCache;                              //@synthesize candidatesCache=_candidatesCache - In the implementation block
@property (assign) char autoCorrects;                                                //@synthesize autoCorrects=_autoCorrects - In the implementation block
@property (assign) char shouldLearnAcceptedCandidate;                                //@synthesize shouldLearnAcceptedCandidate=_shouldLearnAcceptedCandidate - In the implementation block
@property (readonly) TIInputMode * inputMode;                                        //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,retain) TIMecabraEnvironment * mecabraEnvironment;              //@synthesize mecabraEnvironment=_mecabraEnvironment - In the implementation block
@property (readonly) MecabraRef mecabra; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedOperationQueue;
+(id)recipientRecords;
+(id)configureUserDictionaryObserver:(id)arg1 previousObserver:(id)arg2 ;
+(id)mecabraLearningDictionaryDirectory;
-(void)dealloc;
-(TIWordSearchOperationGetCandidates *)operation;
-(void)cancel;
-(void)setOperation:(TIWordSearchOperationGetCandidates *)arg1 ;
-(char)isCancelled;
-(void)clearCache;
-(void)contactStoreDidChange:(id)arg1 ;
-(TIInputMode *)inputMode;
-(void)flushDynamicData;
-(int)mecabraInputMethodType;
-(MecabraRef)mecabra;
-(void)lastAcceptedCandidateCorrected;
-(void)revertInlineCandidate;
-(void)adjustEnvironmentOnAction:(long long)arg1 ;
-(void)declareEndOfSentence;
-(TIMecabraWrapper *)mecabraWrapper;
-(void)setMecabraWrapper:(TIMecabraWrapper *)arg1 ;
-(void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2 ;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(TIMecabraEnvironment *)mecabraEnvironment;
-(void)setMecabraEnvironment:(TIMecabraEnvironment *)arg1 ;
-(void)endInputSession;
-(void)setDebuggingLogEnabled:(char)arg1 ;
-(void)updateMecabraState;
-(void)clearLearningDictionary;
-(int)mecabraLanguage;
-(unsigned long long)mecabraCreationOptions;
-(id)mecabraCreationOptionsDictionary;
-(id)initTIWordSearchWithInputMode:(id)arg1 ;
-(id)initTIWordSearchWithInputMode:(id)arg1 mecabraWrapper:(id)arg2 ;
-(NSCache *)candidatesCache;
-(id)candidatesCacheKeyForOperation:(id)arg1 ;
-(id)candidatesForOperation:(id)arg1 ;
-(id)uncachedCandidatesForOperation:(id)arg1 ;
-(id)cachedCandidatesForOperation:(id)arg1 ;
-(void)_addFacemarkCandidatesToResultSet:(id)arg1 forInput:(id)arg2 ;
-(char)addFacemarkCandidatesToResultSet:(id)arg1 forInput:(id)arg2 ;
-(void)performAccept:(void*)arg1 isPartial:(char)arg2 ;
-(void)resetPreviousWord;
-(void)performOperationAsync:(id)arg1 ;
-(void)performOperationAsync:(id)arg1 withBackgroundActivityAssertion:(char)arg2 ;
-(void)releaseBackgroundActivityAssertion;
-(void)completeOperationsInQueue;
-(void)saveLearningDictionary;
-(void)clearObservers;
-(void)dynamicDictionariesRemoved:(id)arg1 ;
-(void)setLanguageModelAdaptationContextWithClientIdentifier:(id)arg1 recipientIdentifier:(id)arg2 ;
-(void)setLanguageModelAdaptationContext:(id)arg1 ;
-(void)updateUserWordEntries;
-(void)updateDictionaryPaths;
-(void)adaptOfflineToParagraph:(id)arg1 adaptationContext:(id)arg2 timeStamp:(double)arg3 ;
-(void)setLeftDocumentContext:(id)arg1 rightDocumentContext:(id)arg2 ;
-(void)clearLeftDocumentContext;
-(void)commitSurface:(id)arg1 ;
-(void)commitPunctuationSurface:(id)arg1 ;
-(void)resetMecabraEnvironment;
-(void)setMecabraTextContentType:(int)arg1 ;
-(char)autoCorrects;
-(void)setAutoCorrects:(char)arg1 ;
-(char)shouldLearnAcceptedCandidate;
-(void)setShouldLearnAcceptedCandidate:(char)arg1 ;
-(void)setCandidatesCache:(NSCache *)arg1 ;
@end
