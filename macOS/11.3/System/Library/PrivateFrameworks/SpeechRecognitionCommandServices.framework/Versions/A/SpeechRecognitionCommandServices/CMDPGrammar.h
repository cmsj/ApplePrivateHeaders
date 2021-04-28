/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/Versions/A/SpeechRecognitionCommandServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpeechRecognitionCommandServices/SpeechRecognitionCommandServices-Structs.h>
@class NSString, NSMutableArray;

@interface CMDPGrammar : NSObject {

	int _nextFstState;
	int _nextLabelIndex;
	BOOL _addOptionalFst;
	unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>>* _grammarFst;
	BOOL _rebuildGrammar;
	vector<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::__1::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>>>>>* _labelFstPairVector;
	unique_ptr<CMDPNormalizer, std::__1::default_delete<CMDPNormalizer>>* _normalizer;
	NSString* _currentBuiltInLMString;
	NSString* _currentCommandIdentifier;
	NSMutableArray* _grammarDataArray;
	set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>* _symbol_set;
	set<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>* _special_symbol_set;

}
-(void)buildGrammarFst:(CMDPFst*)arg1 forCommandTree:(id)arg2 withFstArcDictionary:(id)arg3 ;
-(void)addPhrase:(id)arg1 toFst:(CMDPFst*)arg2 withArc:(FstArc)arg3 ;
-(void)addAdlibFstWithLabel:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>*)arg1 outputIndex:(int)arg2 ;
-(void)addOptionalFstWithLabel;
-(id)initWithCommandTreeDictionary:(id)arg1 forLocaleIdentifier:(id)arg2 ;
-(VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>, fst::VectorState<fst::ArcTpl<fst::TropicalWeightTpl<float>>, std::__1::allocator<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>Ref)grammarFst;
-(id)grammarData;
@end
