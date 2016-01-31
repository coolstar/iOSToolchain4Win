/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Attribute classes' definitions                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifndef LLVM_CLANG_ATTR_CLASSES_INC
#define LLVM_CLANG_ATTR_CLASSES_INC

class AMDGPUNumSGPRAttr : public InheritableAttr {
unsigned numSGPR;


public:
  static AMDGPUNumSGPRAttr *CreateImplicit(ASTContext &Ctx, unsigned NumSGPR, SourceRange Loc = SourceRange()) {
    AMDGPUNumSGPRAttr *A = new (Ctx) AMDGPUNumSGPRAttr(Loc, Ctx, NumSGPR, 0);
    A->setImplicit(true);
    return A;
  }

  AMDGPUNumSGPRAttr(SourceRange R, ASTContext &Ctx
              , unsigned NumSGPR
              , unsigned SI
             )
    : InheritableAttr(attr::AMDGPUNumSGPR, R, SI, 0, 0)
              , numSGPR(NumSGPR)
  {

  }

  AMDGPUNumSGPRAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  unsigned getNumSGPR() const {
    return numSGPR;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::AMDGPUNumSGPR; }
};

class AMDGPUNumVGPRAttr : public InheritableAttr {
unsigned numVGPR;


public:
  static AMDGPUNumVGPRAttr *CreateImplicit(ASTContext &Ctx, unsigned NumVGPR, SourceRange Loc = SourceRange()) {
    AMDGPUNumVGPRAttr *A = new (Ctx) AMDGPUNumVGPRAttr(Loc, Ctx, NumVGPR, 0);
    A->setImplicit(true);
    return A;
  }

  AMDGPUNumVGPRAttr(SourceRange R, ASTContext &Ctx
              , unsigned NumVGPR
              , unsigned SI
             )
    : InheritableAttr(attr::AMDGPUNumVGPR, R, SI, 0, 0)
              , numVGPR(NumVGPR)
  {

  }

  AMDGPUNumVGPRAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  unsigned getNumVGPR() const {
    return numVGPR;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::AMDGPUNumVGPR; }
};

class ARMInterruptAttr : public InheritableAttr {
public:
  enum InterruptType {
    IRQ,
    FIQ,
    SWI,
    ABORT,
    UNDEF,
    Generic
  };
private:
  InterruptType interrupt;


public:
  static ARMInterruptAttr *CreateImplicit(ASTContext &Ctx, InterruptType Interrupt, SourceRange Loc = SourceRange()) {
    ARMInterruptAttr *A = new (Ctx) ARMInterruptAttr(Loc, Ctx, Interrupt, 0);
    A->setImplicit(true);
    return A;
  }

  ARMInterruptAttr(SourceRange R, ASTContext &Ctx
              , InterruptType Interrupt
              , unsigned SI
             )
    : InheritableAttr(attr::ARMInterrupt, R, SI, 0, 0)
              , interrupt(Interrupt)
  {

  }

  ARMInterruptAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::ARMInterrupt, R, SI, 0, 0)
              , interrupt(InterruptType(0))
  {
  }

  ARMInterruptAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  InterruptType getInterrupt() const {
    return interrupt;
  }

  static bool ConvertStrToInterruptType(StringRef Val, InterruptType &Out) {
    Optional<InterruptType> R = llvm::StringSwitch<Optional<InterruptType>>(Val)
      .Case("IRQ", ARMInterruptAttr::IRQ)
      .Case("FIQ", ARMInterruptAttr::FIQ)
      .Case("SWI", ARMInterruptAttr::SWI)
      .Case("ABORT", ARMInterruptAttr::ABORT)
      .Case("UNDEF", ARMInterruptAttr::UNDEF)
      .Case("", ARMInterruptAttr::Generic)
      .Default(Optional<InterruptType>());
    if (R) {
      Out = *R;
      return true;
    }
    return false;
  }

  static const char *ConvertInterruptTypeToStr(InterruptType Val) {
    switch(Val) {
    case ARMInterruptAttr::IRQ: return "IRQ";
    case ARMInterruptAttr::FIQ: return "FIQ";
    case ARMInterruptAttr::SWI: return "SWI";
    case ARMInterruptAttr::ABORT: return "ABORT";
    case ARMInterruptAttr::UNDEF: return "UNDEF";
    case ARMInterruptAttr::Generic: return "";
    }
    llvm_unreachable("No enumerator with that value");
  }


  static bool classof(const Attr *A) { return A->getKind() == attr::ARMInterrupt; }
};

class AcquireCapabilityAttr : public InheritableAttr {
  unsigned args_Size;
  Expr * *args_;


public:
  enum Spelling {
    GNU_acquire_capability = 0,
    CXX11_clang_acquire_capability = 1,
    GNU_acquire_shared_capability = 2,
    CXX11_clang_acquire_shared_capability = 3,
    GNU_exclusive_lock_function = 4,
    GNU_shared_lock_function = 5
  };

  static AcquireCapabilityAttr *CreateImplicit(ASTContext &Ctx, Spelling S, Expr * *Args, unsigned ArgsSize, SourceRange Loc = SourceRange()) {
    AcquireCapabilityAttr *A = new (Ctx) AcquireCapabilityAttr(Loc, Ctx, Args, ArgsSize, S);
    A->setImplicit(true);
    return A;
  }

  AcquireCapabilityAttr(SourceRange R, ASTContext &Ctx
              , Expr * *Args, unsigned ArgsSize
              , unsigned SI
             )
    : InheritableAttr(attr::AcquireCapability, R, SI, 1, 1)
              , args_Size(ArgsSize), args_(new (Ctx, 16) Expr *[args_Size])
  {
    std::copy(Args, Args + args_Size, args_);
  }

  AcquireCapabilityAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::AcquireCapability, R, SI, 1, 1)
              , args_Size(0), args_(nullptr)
  {
  }

  AcquireCapabilityAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Spelling getSemanticSpelling() const {
  switch (SpellingListIndex) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_acquire_capability;
    case 1: return CXX11_clang_acquire_capability;
    case 2: return GNU_acquire_shared_capability;
    case 3: return CXX11_clang_acquire_shared_capability;
    case 4: return GNU_exclusive_lock_function;
    case 5: return GNU_shared_lock_function;
  }
  }
  bool isShared() const { return SpellingListIndex == 2 ||
    SpellingListIndex == 3 ||
    SpellingListIndex == 5; }
  typedef Expr ** args_iterator;
  args_iterator args_begin() const { return args_; }
  args_iterator args_end() const { return args_ + args_Size; }
  unsigned args_size() const { return args_Size; }
  llvm::iterator_range<args_iterator> args() const { return llvm::make_range(args_begin(), args_end()); }




  static bool classof(const Attr *A) { return A->getKind() == attr::AcquireCapability; }
};

class AcquiredAfterAttr : public InheritableAttr {
  unsigned args_Size;
  Expr * *args_;


public:
  static AcquiredAfterAttr *CreateImplicit(ASTContext &Ctx, Expr * *Args, unsigned ArgsSize, SourceRange Loc = SourceRange()) {
    AcquiredAfterAttr *A = new (Ctx) AcquiredAfterAttr(Loc, Ctx, Args, ArgsSize, 0);
    A->setImplicit(true);
    return A;
  }

  AcquiredAfterAttr(SourceRange R, ASTContext &Ctx
              , Expr * *Args, unsigned ArgsSize
              , unsigned SI
             )
    : InheritableAttr(attr::AcquiredAfter, R, SI, 1, 1)
              , args_Size(ArgsSize), args_(new (Ctx, 16) Expr *[args_Size])
  {
    std::copy(Args, Args + args_Size, args_);
  }

  AcquiredAfterAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::AcquiredAfter, R, SI, 1, 1)
              , args_Size(0), args_(nullptr)
  {
  }

  AcquiredAfterAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  typedef Expr ** args_iterator;
  args_iterator args_begin() const { return args_; }
  args_iterator args_end() const { return args_ + args_Size; }
  unsigned args_size() const { return args_Size; }
  llvm::iterator_range<args_iterator> args() const { return llvm::make_range(args_begin(), args_end()); }




  static bool classof(const Attr *A) { return A->getKind() == attr::AcquiredAfter; }
};

class AcquiredBeforeAttr : public InheritableAttr {
  unsigned args_Size;
  Expr * *args_;


public:
  static AcquiredBeforeAttr *CreateImplicit(ASTContext &Ctx, Expr * *Args, unsigned ArgsSize, SourceRange Loc = SourceRange()) {
    AcquiredBeforeAttr *A = new (Ctx) AcquiredBeforeAttr(Loc, Ctx, Args, ArgsSize, 0);
    A->setImplicit(true);
    return A;
  }

  AcquiredBeforeAttr(SourceRange R, ASTContext &Ctx
              , Expr * *Args, unsigned ArgsSize
              , unsigned SI
             )
    : InheritableAttr(attr::AcquiredBefore, R, SI, 1, 1)
              , args_Size(ArgsSize), args_(new (Ctx, 16) Expr *[args_Size])
  {
    std::copy(Args, Args + args_Size, args_);
  }

  AcquiredBeforeAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::AcquiredBefore, R, SI, 1, 1)
              , args_Size(0), args_(nullptr)
  {
  }

  AcquiredBeforeAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  typedef Expr ** args_iterator;
  args_iterator args_begin() const { return args_; }
  args_iterator args_end() const { return args_ + args_Size; }
  unsigned args_size() const { return args_Size; }
  llvm::iterator_range<args_iterator> args() const { return llvm::make_range(args_begin(), args_end()); }




  static bool classof(const Attr *A) { return A->getKind() == attr::AcquiredBefore; }
};

class AliasAttr : public Attr {
unsigned aliaseeLength;
char *aliasee;


public:
  static AliasAttr *CreateImplicit(ASTContext &Ctx, llvm::StringRef Aliasee, SourceRange Loc = SourceRange()) {
    AliasAttr *A = new (Ctx) AliasAttr(Loc, Ctx, Aliasee, 0);
    A->setImplicit(true);
    return A;
  }

  AliasAttr(SourceRange R, ASTContext &Ctx
              , llvm::StringRef Aliasee
              , unsigned SI
             )
    : Attr(attr::Alias, R, SI, 0, 0)
              , aliaseeLength(Aliasee.size()),aliasee(new (Ctx, 1) char[aliaseeLength])
  {
      if (!Aliasee.empty())
        std::memcpy(aliasee, Aliasee.data(), aliaseeLength);
  }

  AliasAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  llvm::StringRef getAliasee() const {
    return llvm::StringRef(aliasee, aliaseeLength);
  }
  unsigned getAliaseeLength() const {
    return aliaseeLength;
  }
  void setAliasee(ASTContext &C, llvm::StringRef S) {
    aliaseeLength = S.size();
    this->aliasee = new (C, 1) char [aliaseeLength];
    if (!S.empty())
      std::memcpy(this->aliasee, S.data(), aliaseeLength);
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::Alias; }
};

class AlignMac68kAttr : public InheritableAttr {

public:
  static AlignMac68kAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    AlignMac68kAttr *A = new (Ctx) AlignMac68kAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  AlignMac68kAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::AlignMac68k, R, SI, 0, 0)
  {
  }

  AlignMac68kAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::AlignMac68k; }
};

class AlignValueAttr : public Attr {
Expr * alignment;


public:
  static AlignValueAttr *CreateImplicit(ASTContext &Ctx, Expr * Alignment, SourceRange Loc = SourceRange()) {
    AlignValueAttr *A = new (Ctx) AlignValueAttr(Loc, Ctx, Alignment, 0);
    A->setImplicit(true);
    return A;
  }

  AlignValueAttr(SourceRange R, ASTContext &Ctx
              , Expr * Alignment
              , unsigned SI
             )
    : Attr(attr::AlignValue, R, SI, 0, 0)
              , alignment(Alignment)
  {

  }

  AlignValueAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Expr * getAlignment() const {
    return alignment;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::AlignValue; }
};

class AlignedAttr : public InheritableAttr {
bool isalignmentExpr;
union {
Expr *alignmentExpr;
TypeSourceInfo *alignmentType;
};


public:
  enum Spelling {
    GNU_aligned = 0,
    CXX11_gnu_aligned = 1,
    Declspec_align = 2,
    Keyword_alignas = 3,
    Keyword_Alignas = 4
  };

  static AlignedAttr *CreateImplicit(ASTContext &Ctx, Spelling S, bool IsAlignmentExpr, void *Alignment, SourceRange Loc = SourceRange()) {
    AlignedAttr *A = new (Ctx) AlignedAttr(Loc, Ctx, IsAlignmentExpr, Alignment, S);
    A->setImplicit(true);
    return A;
  }

  AlignedAttr(SourceRange R, ASTContext &Ctx
              , bool IsAlignmentExpr, void *Alignment
              , unsigned SI
             )
    : InheritableAttr(attr::Aligned, R, SI, 0, 0)
              , isalignmentExpr(IsAlignmentExpr)
  {
    if (isalignmentExpr)
       alignmentExpr = reinterpret_cast<Expr *>(Alignment);
    else
       alignmentType = reinterpret_cast<TypeSourceInfo *>(Alignment);
  }

  AlignedAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Aligned, R, SI, 0, 0)
              , isalignmentExpr(false)
  {
  }

  AlignedAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Spelling getSemanticSpelling() const {
  switch (SpellingListIndex) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_aligned;
    case 1: return CXX11_gnu_aligned;
    case 2: return Declspec_align;
    case 3: return Keyword_alignas;
    case 4: return Keyword_Alignas;
  }
  }
  bool isGNU() const { return SpellingListIndex == 0 ||
    SpellingListIndex == 1; }
  bool isC11() const { return SpellingListIndex == 4; }
  bool isAlignas() const { return SpellingListIndex == 3 ||
    SpellingListIndex == 4; }
  bool isDeclspec() const { return SpellingListIndex == 2; }
  bool isAlignmentDependent() const;
  unsigned getAlignment(ASTContext &Ctx) const;
  bool isAlignmentExpr() const {
    return isalignmentExpr;
  }
  Expr *getAlignmentExpr() const {
    assert(isalignmentExpr);
    return alignmentExpr;
  }
  TypeSourceInfo *getAlignmentType() const {
    assert(!isalignmentExpr);
    return alignmentType;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::Aligned; }
};

class AlwaysInlineAttr : public InheritableAttr {

public:
  enum Spelling {
    GNU_always_inline = 0,
    CXX11_gnu_always_inline = 1,
    Keyword_forceinline = 2
  };

  static AlwaysInlineAttr *CreateImplicit(ASTContext &Ctx, Spelling S, SourceRange Loc = SourceRange()) {
    AlwaysInlineAttr *A = new (Ctx) AlwaysInlineAttr(Loc, Ctx, S);
    A->setImplicit(true);
    return A;
  }

  AlwaysInlineAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::AlwaysInline, R, SI, 0, 0)
  {
  }

  AlwaysInlineAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Spelling getSemanticSpelling() const {
  switch (SpellingListIndex) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_always_inline;
    case 1: return CXX11_gnu_always_inline;
    case 2: return Keyword_forceinline;
  }
  }


  static bool classof(const Attr *A) { return A->getKind() == attr::AlwaysInline; }
};

class AnalyzerNoReturnAttr : public InheritableAttr {

public:
  static AnalyzerNoReturnAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    AnalyzerNoReturnAttr *A = new (Ctx) AnalyzerNoReturnAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  AnalyzerNoReturnAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::AnalyzerNoReturn, R, SI, 0, 0)
  {
  }

  AnalyzerNoReturnAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::AnalyzerNoReturn; }
};

class AnnotateAttr : public InheritableParamAttr {
unsigned annotationLength;
char *annotation;


public:
  static AnnotateAttr *CreateImplicit(ASTContext &Ctx, llvm::StringRef Annotation, SourceRange Loc = SourceRange()) {
    AnnotateAttr *A = new (Ctx) AnnotateAttr(Loc, Ctx, Annotation, 0);
    A->setImplicit(true);
    return A;
  }

  AnnotateAttr(SourceRange R, ASTContext &Ctx
              , llvm::StringRef Annotation
              , unsigned SI
             )
    : InheritableParamAttr(attr::Annotate, R, SI, 0, 0)
              , annotationLength(Annotation.size()),annotation(new (Ctx, 1) char[annotationLength])
  {
      if (!Annotation.empty())
        std::memcpy(annotation, Annotation.data(), annotationLength);
  }

  AnnotateAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  llvm::StringRef getAnnotation() const {
    return llvm::StringRef(annotation, annotationLength);
  }
  unsigned getAnnotationLength() const {
    return annotationLength;
  }
  void setAnnotation(ASTContext &C, llvm::StringRef S) {
    annotationLength = S.size();
    this->annotation = new (C, 1) char [annotationLength];
    if (!S.empty())
      std::memcpy(this->annotation, S.data(), annotationLength);
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::Annotate; }
};

class ArcWeakrefUnavailableAttr : public InheritableAttr {

public:
  static ArcWeakrefUnavailableAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ArcWeakrefUnavailableAttr *A = new (Ctx) ArcWeakrefUnavailableAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ArcWeakrefUnavailableAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::ArcWeakrefUnavailable, R, SI, 0, 0)
  {
  }

  ArcWeakrefUnavailableAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::ArcWeakrefUnavailable; }
};

class ArgumentWithTypeTagAttr : public InheritableAttr {
IdentifierInfo * argumentKind;

unsigned argumentIdx;

unsigned typeTagIdx;

bool isPointer;


public:
  enum Spelling {
    GNU_argument_with_type_tag = 0,
    GNU_pointer_with_type_tag = 1
  };

  static ArgumentWithTypeTagAttr *CreateImplicit(ASTContext &Ctx, Spelling S, IdentifierInfo * ArgumentKind, unsigned ArgumentIdx, unsigned TypeTagIdx, bool IsPointer, SourceRange Loc = SourceRange()) {
    ArgumentWithTypeTagAttr *A = new (Ctx) ArgumentWithTypeTagAttr(Loc, Ctx, ArgumentKind, ArgumentIdx, TypeTagIdx, IsPointer, S);
    A->setImplicit(true);
    return A;
  }

  ArgumentWithTypeTagAttr(SourceRange R, ASTContext &Ctx
              , IdentifierInfo * ArgumentKind
              , unsigned ArgumentIdx
              , unsigned TypeTagIdx
              , bool IsPointer
              , unsigned SI
             )
    : InheritableAttr(attr::ArgumentWithTypeTag, R, SI, 0, 0)
              , argumentKind(ArgumentKind)
              , argumentIdx(ArgumentIdx)
              , typeTagIdx(TypeTagIdx)
              , isPointer(IsPointer)
  {




  }

  ArgumentWithTypeTagAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Spelling getSemanticSpelling() const {
  switch (SpellingListIndex) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_argument_with_type_tag;
    case 1: return GNU_pointer_with_type_tag;
  }
  }
  IdentifierInfo * getArgumentKind() const {
    return argumentKind;
  }

  unsigned getArgumentIdx() const {
    return argumentIdx;
  }

  unsigned getTypeTagIdx() const {
    return typeTagIdx;
  }

  bool getIsPointer() const {
    return isPointer;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::ArgumentWithTypeTag; }
};

class AsmLabelAttr : public InheritableAttr {
unsigned labelLength;
char *label;


public:
  static AsmLabelAttr *CreateImplicit(ASTContext &Ctx, llvm::StringRef Label, SourceRange Loc = SourceRange()) {
    AsmLabelAttr *A = new (Ctx) AsmLabelAttr(Loc, Ctx, Label, 0);
    A->setImplicit(true);
    return A;
  }

  AsmLabelAttr(SourceRange R, ASTContext &Ctx
              , llvm::StringRef Label
              , unsigned SI
             )
    : InheritableAttr(attr::AsmLabel, R, SI, 0, 0)
              , labelLength(Label.size()),label(new (Ctx, 1) char[labelLength])
  {
      if (!Label.empty())
        std::memcpy(label, Label.data(), labelLength);
  }

  AsmLabelAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  llvm::StringRef getLabel() const {
    return llvm::StringRef(label, labelLength);
  }
  unsigned getLabelLength() const {
    return labelLength;
  }
  void setLabel(ASTContext &C, llvm::StringRef S) {
    labelLength = S.size();
    this->label = new (C, 1) char [labelLength];
    if (!S.empty())
      std::memcpy(this->label, S.data(), labelLength);
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::AsmLabel; }
};

class AssertCapabilityAttr : public InheritableAttr {
Expr * expr;


public:
  enum Spelling {
    GNU_assert_capability = 0,
    CXX11_clang_assert_capability = 1,
    GNU_assert_shared_capability = 2,
    CXX11_clang_assert_shared_capability = 3
  };

  static AssertCapabilityAttr *CreateImplicit(ASTContext &Ctx, Spelling S, Expr * Expr, SourceRange Loc = SourceRange()) {
    AssertCapabilityAttr *A = new (Ctx) AssertCapabilityAttr(Loc, Ctx, Expr, S);
    A->setImplicit(true);
    return A;
  }

  AssertCapabilityAttr(SourceRange R, ASTContext &Ctx
              , Expr * Expr
              , unsigned SI
             )
    : InheritableAttr(attr::AssertCapability, R, SI, 1, 1)
              , expr(Expr)
  {

  }

  AssertCapabilityAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Spelling getSemanticSpelling() const {
  switch (SpellingListIndex) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_assert_capability;
    case 1: return CXX11_clang_assert_capability;
    case 2: return GNU_assert_shared_capability;
    case 3: return CXX11_clang_assert_shared_capability;
  }
  }
  bool isShared() const { return SpellingListIndex == 2 ||
    SpellingListIndex == 3; }
  Expr * getExpr() const {
    return expr;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::AssertCapability; }
};

class AssertExclusiveLockAttr : public InheritableAttr {
  unsigned args_Size;
  Expr * *args_;


public:
  static AssertExclusiveLockAttr *CreateImplicit(ASTContext &Ctx, Expr * *Args, unsigned ArgsSize, SourceRange Loc = SourceRange()) {
    AssertExclusiveLockAttr *A = new (Ctx) AssertExclusiveLockAttr(Loc, Ctx, Args, ArgsSize, 0);
    A->setImplicit(true);
    return A;
  }

  AssertExclusiveLockAttr(SourceRange R, ASTContext &Ctx
              , Expr * *Args, unsigned ArgsSize
              , unsigned SI
             )
    : InheritableAttr(attr::AssertExclusiveLock, R, SI, 1, 1)
              , args_Size(ArgsSize), args_(new (Ctx, 16) Expr *[args_Size])
  {
    std::copy(Args, Args + args_Size, args_);
  }

  AssertExclusiveLockAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::AssertExclusiveLock, R, SI, 1, 1)
              , args_Size(0), args_(nullptr)
  {
  }

  AssertExclusiveLockAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  typedef Expr ** args_iterator;
  args_iterator args_begin() const { return args_; }
  args_iterator args_end() const { return args_ + args_Size; }
  unsigned args_size() const { return args_Size; }
  llvm::iterator_range<args_iterator> args() const { return llvm::make_range(args_begin(), args_end()); }




  static bool classof(const Attr *A) { return A->getKind() == attr::AssertExclusiveLock; }
};

class AssertSharedLockAttr : public InheritableAttr {
  unsigned args_Size;
  Expr * *args_;


public:
  static AssertSharedLockAttr *CreateImplicit(ASTContext &Ctx, Expr * *Args, unsigned ArgsSize, SourceRange Loc = SourceRange()) {
    AssertSharedLockAttr *A = new (Ctx) AssertSharedLockAttr(Loc, Ctx, Args, ArgsSize, 0);
    A->setImplicit(true);
    return A;
  }

  AssertSharedLockAttr(SourceRange R, ASTContext &Ctx
              , Expr * *Args, unsigned ArgsSize
              , unsigned SI
             )
    : InheritableAttr(attr::AssertSharedLock, R, SI, 1, 1)
              , args_Size(ArgsSize), args_(new (Ctx, 16) Expr *[args_Size])
  {
    std::copy(Args, Args + args_Size, args_);
  }

  AssertSharedLockAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::AssertSharedLock, R, SI, 1, 1)
              , args_Size(0), args_(nullptr)
  {
  }

  AssertSharedLockAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  typedef Expr ** args_iterator;
  args_iterator args_begin() const { return args_; }
  args_iterator args_end() const { return args_ + args_Size; }
  unsigned args_size() const { return args_Size; }
  llvm::iterator_range<args_iterator> args() const { return llvm::make_range(args_begin(), args_end()); }




  static bool classof(const Attr *A) { return A->getKind() == attr::AssertSharedLock; }
};

class AssumeAlignedAttr : public InheritableAttr {
Expr * alignment;

Expr * offset;


public:
  static AssumeAlignedAttr *CreateImplicit(ASTContext &Ctx, Expr * Alignment, Expr * Offset, SourceRange Loc = SourceRange()) {
    AssumeAlignedAttr *A = new (Ctx) AssumeAlignedAttr(Loc, Ctx, Alignment, Offset, 0);
    A->setImplicit(true);
    return A;
  }

  AssumeAlignedAttr(SourceRange R, ASTContext &Ctx
              , Expr * Alignment
              , Expr * Offset
              , unsigned SI
             )
    : InheritableAttr(attr::AssumeAligned, R, SI, 0, 0)
              , alignment(Alignment)
              , offset(Offset)
  {


  }

  AssumeAlignedAttr(SourceRange R, ASTContext &Ctx
              , Expr * Alignment
              , unsigned SI
             )
    : InheritableAttr(attr::AssumeAligned, R, SI, 0, 0)
              , alignment()
              , offset()
  {

  }

  AssumeAlignedAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Expr * getAlignment() const {
    return alignment;
  }

  Expr * getOffset() const {
    return offset;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::AssumeAligned; }
};

class AvailabilityAttr : public InheritableAttr {
IdentifierInfo * platform;

VersionTuple introduced;


VersionTuple deprecated;


VersionTuple obsoleted;


bool unavailable;

unsigned messageLength;
char *message;


public:
  static AvailabilityAttr *CreateImplicit(ASTContext &Ctx, IdentifierInfo * Platform, VersionTuple Introduced, VersionTuple Deprecated, VersionTuple Obsoleted, bool Unavailable, llvm::StringRef Message, SourceRange Loc = SourceRange()) {
    AvailabilityAttr *A = new (Ctx) AvailabilityAttr(Loc, Ctx, Platform, Introduced, Deprecated, Obsoleted, Unavailable, Message, 0);
    A->setImplicit(true);
    return A;
  }

  AvailabilityAttr(SourceRange R, ASTContext &Ctx
              , IdentifierInfo * Platform
              , VersionTuple Introduced
              , VersionTuple Deprecated
              , VersionTuple Obsoleted
              , bool Unavailable
              , llvm::StringRef Message
              , unsigned SI
             )
    : InheritableAttr(attr::Availability, R, SI, 0, 1)
              , platform(Platform)
              , introduced(Introduced)
              , deprecated(Deprecated)
              , obsoleted(Obsoleted)
              , unavailable(Unavailable)
              , messageLength(Message.size()),message(new (Ctx, 1) char[messageLength])
  {





      if (!Message.empty())
        std::memcpy(message, Message.data(), messageLength);
  }

  AvailabilityAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  IdentifierInfo * getPlatform() const {
    return platform;
  }

  VersionTuple getIntroduced() const {
    return introduced;
  }
  void setIntroduced(ASTContext &C, VersionTuple V) {
    introduced = V;
  }

  VersionTuple getDeprecated() const {
    return deprecated;
  }
  void setDeprecated(ASTContext &C, VersionTuple V) {
    deprecated = V;
  }

  VersionTuple getObsoleted() const {
    return obsoleted;
  }
  void setObsoleted(ASTContext &C, VersionTuple V) {
    obsoleted = V;
  }

  bool getUnavailable() const {
    return unavailable;
  }

  llvm::StringRef getMessage() const {
    return llvm::StringRef(message, messageLength);
  }
  unsigned getMessageLength() const {
    return messageLength;
  }
  void setMessage(ASTContext &C, llvm::StringRef S) {
    messageLength = S.size();
    this->message = new (C, 1) char [messageLength];
    if (!S.empty())
      std::memcpy(this->message, S.data(), messageLength);
  }

static llvm::StringRef getPrettyPlatformName(llvm::StringRef Platform) {
    return llvm::StringSwitch<llvm::StringRef>(Platform)
             .Case("android", "Android")
             .Case("ios", "iOS")
             .Case("macosx", "OS X")
             .Case("ios_app_extension", "iOS (App Extension)")
             .Case("macosx_app_extension", "OS X (App Extension)")
             .Default(llvm::StringRef());
} 

  static bool classof(const Attr *A) { return A->getKind() == attr::Availability; }
};

class BlocksAttr : public InheritableAttr {
public:
  enum BlockType {
    ByRef
  };
private:
  BlockType type;


public:
  static BlocksAttr *CreateImplicit(ASTContext &Ctx, BlockType Type, SourceRange Loc = SourceRange()) {
    BlocksAttr *A = new (Ctx) BlocksAttr(Loc, Ctx, Type, 0);
    A->setImplicit(true);
    return A;
  }

  BlocksAttr(SourceRange R, ASTContext &Ctx
              , BlockType Type
              , unsigned SI
             )
    : InheritableAttr(attr::Blocks, R, SI, 0, 0)
              , type(Type)
  {

  }

  BlocksAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  BlockType getType() const {
    return type;
  }

  static bool ConvertStrToBlockType(StringRef Val, BlockType &Out) {
    Optional<BlockType> R = llvm::StringSwitch<Optional<BlockType>>(Val)
      .Case("byref", BlocksAttr::ByRef)
      .Default(Optional<BlockType>());
    if (R) {
      Out = *R;
      return true;
    }
    return false;
  }

  static const char *ConvertBlockTypeToStr(BlockType Val) {
    switch(Val) {
    case BlocksAttr::ByRef: return "byref";
    }
    llvm_unreachable("No enumerator with that value");
  }


  static bool classof(const Attr *A) { return A->getKind() == attr::Blocks; }
};

class C11NoReturnAttr : public InheritableAttr {

public:
  static C11NoReturnAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    C11NoReturnAttr *A = new (Ctx) C11NoReturnAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  C11NoReturnAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::C11NoReturn, R, SI, 0, 0)
  {
  }

  C11NoReturnAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::C11NoReturn; }
};

class CDeclAttr : public InheritableAttr {

public:
  static CDeclAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    CDeclAttr *A = new (Ctx) CDeclAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  CDeclAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::CDecl, R, SI, 0, 0)
  {
  }

  CDeclAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::CDecl; }
};

class CFAuditedTransferAttr : public InheritableAttr {

public:
  static CFAuditedTransferAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    CFAuditedTransferAttr *A = new (Ctx) CFAuditedTransferAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  CFAuditedTransferAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::CFAuditedTransfer, R, SI, 0, 0)
  {
  }

  CFAuditedTransferAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::CFAuditedTransfer; }
};

class CFConsumedAttr : public InheritableParamAttr {

public:
  static CFConsumedAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    CFConsumedAttr *A = new (Ctx) CFConsumedAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  CFConsumedAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableParamAttr(attr::CFConsumed, R, SI, 0, 0)
  {
  }

  CFConsumedAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::CFConsumed; }
};

class CFReturnsNotRetainedAttr : public InheritableAttr {

public:
  static CFReturnsNotRetainedAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    CFReturnsNotRetainedAttr *A = new (Ctx) CFReturnsNotRetainedAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  CFReturnsNotRetainedAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::CFReturnsNotRetained, R, SI, 0, 0)
  {
  }

  CFReturnsNotRetainedAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::CFReturnsNotRetained; }
};

class CFReturnsRetainedAttr : public InheritableAttr {

public:
  static CFReturnsRetainedAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    CFReturnsRetainedAttr *A = new (Ctx) CFReturnsRetainedAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  CFReturnsRetainedAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::CFReturnsRetained, R, SI, 0, 0)
  {
  }

  CFReturnsRetainedAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::CFReturnsRetained; }
};

class CFUnknownTransferAttr : public InheritableAttr {

public:
  static CFUnknownTransferAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    CFUnknownTransferAttr *A = new (Ctx) CFUnknownTransferAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  CFUnknownTransferAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::CFUnknownTransfer, R, SI, 0, 0)
  {
  }

  CFUnknownTransferAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::CFUnknownTransfer; }
};

class CUDAConstantAttr : public InheritableAttr {

public:
  static CUDAConstantAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    CUDAConstantAttr *A = new (Ctx) CUDAConstantAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  CUDAConstantAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::CUDAConstant, R, SI, 0, 0)
  {
  }

  CUDAConstantAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::CUDAConstant; }
};

class CUDADeviceAttr : public InheritableAttr {

public:
  static CUDADeviceAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    CUDADeviceAttr *A = new (Ctx) CUDADeviceAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  CUDADeviceAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::CUDADevice, R, SI, 0, 0)
  {
  }

  CUDADeviceAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::CUDADevice; }
};

class CUDAGlobalAttr : public InheritableAttr {

public:
  static CUDAGlobalAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    CUDAGlobalAttr *A = new (Ctx) CUDAGlobalAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  CUDAGlobalAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::CUDAGlobal, R, SI, 0, 0)
  {
  }

  CUDAGlobalAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::CUDAGlobal; }
};

class CUDAHostAttr : public InheritableAttr {

public:
  static CUDAHostAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    CUDAHostAttr *A = new (Ctx) CUDAHostAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  CUDAHostAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::CUDAHost, R, SI, 0, 0)
  {
  }

  CUDAHostAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::CUDAHost; }
};

class CUDAInvalidTargetAttr : public InheritableAttr {

public:
  static CUDAInvalidTargetAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    CUDAInvalidTargetAttr *A = new (Ctx) CUDAInvalidTargetAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  CUDAInvalidTargetAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::CUDAInvalidTarget, R, SI, 0, 0)
  {
  }

  CUDAInvalidTargetAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::CUDAInvalidTarget; }
};

class CUDALaunchBoundsAttr : public InheritableAttr {
Expr * maxThreads;

Expr * minBlocks;


public:
  static CUDALaunchBoundsAttr *CreateImplicit(ASTContext &Ctx, Expr * MaxThreads, Expr * MinBlocks, SourceRange Loc = SourceRange()) {
    CUDALaunchBoundsAttr *A = new (Ctx) CUDALaunchBoundsAttr(Loc, Ctx, MaxThreads, MinBlocks, 0);
    A->setImplicit(true);
    return A;
  }

  CUDALaunchBoundsAttr(SourceRange R, ASTContext &Ctx
              , Expr * MaxThreads
              , Expr * MinBlocks
              , unsigned SI
             )
    : InheritableAttr(attr::CUDALaunchBounds, R, SI, 0, 0)
              , maxThreads(MaxThreads)
              , minBlocks(MinBlocks)
  {


  }

  CUDALaunchBoundsAttr(SourceRange R, ASTContext &Ctx
              , Expr * MaxThreads
              , unsigned SI
             )
    : InheritableAttr(attr::CUDALaunchBounds, R, SI, 0, 0)
              , maxThreads()
              , minBlocks()
  {

  }

  CUDALaunchBoundsAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Expr * getMaxThreads() const {
    return maxThreads;
  }

  Expr * getMinBlocks() const {
    return minBlocks;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::CUDALaunchBounds; }
};

class CUDASharedAttr : public InheritableAttr {

public:
  static CUDASharedAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    CUDASharedAttr *A = new (Ctx) CUDASharedAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  CUDASharedAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::CUDAShared, R, SI, 0, 0)
  {
  }

  CUDASharedAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::CUDAShared; }
};

class CXX11NoReturnAttr : public InheritableAttr {

public:
  static CXX11NoReturnAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    CXX11NoReturnAttr *A = new (Ctx) CXX11NoReturnAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  CXX11NoReturnAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::CXX11NoReturn, R, SI, 0, 0)
  {
  }

  CXX11NoReturnAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::CXX11NoReturn; }
};

class CallableWhenAttr : public InheritableAttr {
public:
  enum ConsumedState {
    Unknown,
    Consumed,
    Unconsumed
  };
private:
  unsigned callableStates_Size;
  ConsumedState *callableStates_;


public:
  static CallableWhenAttr *CreateImplicit(ASTContext &Ctx, ConsumedState *CallableStates, unsigned CallableStatesSize, SourceRange Loc = SourceRange()) {
    CallableWhenAttr *A = new (Ctx) CallableWhenAttr(Loc, Ctx, CallableStates, CallableStatesSize, 0);
    A->setImplicit(true);
    return A;
  }

  CallableWhenAttr(SourceRange R, ASTContext &Ctx
              , ConsumedState *CallableStates, unsigned CallableStatesSize
              , unsigned SI
             )
    : InheritableAttr(attr::CallableWhen, R, SI, 0, 0)
              , callableStates_Size(CallableStatesSize), callableStates_(new (Ctx, 16) ConsumedState[callableStates_Size])
  {
    std::copy(CallableStates, CallableStates + callableStates_Size, callableStates_);
  }

  CallableWhenAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::CallableWhen, R, SI, 0, 0)
              , callableStates_Size(0), callableStates_(nullptr)
  {
  }

  CallableWhenAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  typedef ConsumedState* callableStates_iterator;
  callableStates_iterator callableStates_begin() const { return callableStates_; }
  callableStates_iterator callableStates_end() const { return callableStates_ + callableStates_Size; }
  unsigned callableStates_size() const { return callableStates_Size; }
  llvm::iterator_range<callableStates_iterator> callableStates() const { return llvm::make_range(callableStates_begin(), callableStates_end()); }


  static bool ConvertStrToConsumedState(StringRef Val, ConsumedState &Out) {
    Optional<ConsumedState> R = llvm::StringSwitch<Optional<ConsumedState>>(Val)
      .Case("unknown", CallableWhenAttr::Unknown)
      .Case("consumed", CallableWhenAttr::Consumed)
      .Case("unconsumed", CallableWhenAttr::Unconsumed)
      .Default(Optional<ConsumedState>());
    if (R) {
      Out = *R;
      return true;
    }
    return false;
  }

  static const char *ConvertConsumedStateToStr(ConsumedState Val) {
    switch(Val) {
    case CallableWhenAttr::Unknown: return "unknown";
    case CallableWhenAttr::Consumed: return "consumed";
    case CallableWhenAttr::Unconsumed: return "unconsumed";
    }
    llvm_unreachable("No enumerator with that value");
  }


  static bool classof(const Attr *A) { return A->getKind() == attr::CallableWhen; }
};

class CapabilityAttr : public InheritableAttr {
unsigned nameLength;
char *name;


public:
  enum Spelling {
    GNU_capability = 0,
    CXX11_clang_capability = 1,
    GNU_shared_capability = 2,
    CXX11_clang_shared_capability = 3
  };

  static CapabilityAttr *CreateImplicit(ASTContext &Ctx, Spelling S, llvm::StringRef Name, SourceRange Loc = SourceRange()) {
    CapabilityAttr *A = new (Ctx) CapabilityAttr(Loc, Ctx, Name, S);
    A->setImplicit(true);
    return A;
  }

  CapabilityAttr(SourceRange R, ASTContext &Ctx
              , llvm::StringRef Name
              , unsigned SI
             )
    : InheritableAttr(attr::Capability, R, SI, 0, 0)
              , nameLength(Name.size()),name(new (Ctx, 1) char[nameLength])
  {
      if (!Name.empty())
        std::memcpy(name, Name.data(), nameLength);
  }

  CapabilityAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Spelling getSemanticSpelling() const {
  switch (SpellingListIndex) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_capability;
    case 1: return CXX11_clang_capability;
    case 2: return GNU_shared_capability;
    case 3: return CXX11_clang_shared_capability;
  }
  }
  bool isShared() const { return SpellingListIndex == 2 ||
    SpellingListIndex == 3; }
  llvm::StringRef getName() const {
    return llvm::StringRef(name, nameLength);
  }
  unsigned getNameLength() const {
    return nameLength;
  }
  void setName(ASTContext &C, llvm::StringRef S) {
    nameLength = S.size();
    this->name = new (C, 1) char [nameLength];
    if (!S.empty())
      std::memcpy(this->name, S.data(), nameLength);
  }


    bool isMutex() const { return getName().equals_lower("mutex"); }
    bool isRole() const { return getName().equals_lower("role"); }
  

  static bool classof(const Attr *A) { return A->getKind() == attr::Capability; }
};

class CapturedRecordAttr : public InheritableAttr {

public:
  static CapturedRecordAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    CapturedRecordAttr *A = new (Ctx) CapturedRecordAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  CapturedRecordAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::CapturedRecord, R, SI, 0, 0)
  {
  }

  CapturedRecordAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::CapturedRecord; }
};

class CarriesDependencyAttr : public InheritableParamAttr {

public:
  static CarriesDependencyAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    CarriesDependencyAttr *A = new (Ctx) CarriesDependencyAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  CarriesDependencyAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableParamAttr(attr::CarriesDependency, R, SI, 0, 0)
  {
  }

  CarriesDependencyAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::CarriesDependency; }
};

class CleanupAttr : public InheritableAttr {
FunctionDecl * functionDecl;


public:
  static CleanupAttr *CreateImplicit(ASTContext &Ctx, FunctionDecl * FunctionDecl, SourceRange Loc = SourceRange()) {
    CleanupAttr *A = new (Ctx) CleanupAttr(Loc, Ctx, FunctionDecl, 0);
    A->setImplicit(true);
    return A;
  }

  CleanupAttr(SourceRange R, ASTContext &Ctx
              , FunctionDecl * FunctionDecl
              , unsigned SI
             )
    : InheritableAttr(attr::Cleanup, R, SI, 0, 0)
              , functionDecl(FunctionDecl)
  {

  }

  CleanupAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  FunctionDecl * getFunctionDecl() const {
    return functionDecl;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::Cleanup; }
};

class ColdAttr : public InheritableAttr {

public:
  static ColdAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ColdAttr *A = new (Ctx) ColdAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ColdAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Cold, R, SI, 0, 0)
  {
  }

  ColdAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::Cold; }
};

class CommonAttr : public InheritableAttr {

public:
  static CommonAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    CommonAttr *A = new (Ctx) CommonAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  CommonAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Common, R, SI, 0, 0)
  {
  }

  CommonAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::Common; }
};

class ConstAttr : public InheritableAttr {

public:
  static ConstAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ConstAttr *A = new (Ctx) ConstAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ConstAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Const, R, SI, 0, 0)
  {
  }

  ConstAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::Const; }
};

class ConstructorAttr : public InheritableAttr {
int priority;


public:
  static ConstructorAttr *CreateImplicit(ASTContext &Ctx, int Priority, SourceRange Loc = SourceRange()) {
    ConstructorAttr *A = new (Ctx) ConstructorAttr(Loc, Ctx, Priority, 0);
    A->setImplicit(true);
    return A;
  }

  ConstructorAttr(SourceRange R, ASTContext &Ctx
              , int Priority
              , unsigned SI
             )
    : InheritableAttr(attr::Constructor, R, SI, 0, 0)
              , priority(Priority)
  {

  }

  ConstructorAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Constructor, R, SI, 0, 0)
              , priority()
  {
  }

  ConstructorAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  int getPriority() const {
    return priority;
  }

  static const int DefaultPriority = 65535;



  static bool classof(const Attr *A) { return A->getKind() == attr::Constructor; }
};

class ConsumableAttr : public InheritableAttr {
public:
  enum ConsumedState {
    Unknown,
    Consumed,
    Unconsumed
  };
private:
  ConsumedState defaultState;


public:
  static ConsumableAttr *CreateImplicit(ASTContext &Ctx, ConsumedState DefaultState, SourceRange Loc = SourceRange()) {
    ConsumableAttr *A = new (Ctx) ConsumableAttr(Loc, Ctx, DefaultState, 0);
    A->setImplicit(true);
    return A;
  }

  ConsumableAttr(SourceRange R, ASTContext &Ctx
              , ConsumedState DefaultState
              , unsigned SI
             )
    : InheritableAttr(attr::Consumable, R, SI, 0, 0)
              , defaultState(DefaultState)
  {

  }

  ConsumableAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  ConsumedState getDefaultState() const {
    return defaultState;
  }

  static bool ConvertStrToConsumedState(StringRef Val, ConsumedState &Out) {
    Optional<ConsumedState> R = llvm::StringSwitch<Optional<ConsumedState>>(Val)
      .Case("unknown", ConsumableAttr::Unknown)
      .Case("consumed", ConsumableAttr::Consumed)
      .Case("unconsumed", ConsumableAttr::Unconsumed)
      .Default(Optional<ConsumedState>());
    if (R) {
      Out = *R;
      return true;
    }
    return false;
  }

  static const char *ConvertConsumedStateToStr(ConsumedState Val) {
    switch(Val) {
    case ConsumableAttr::Unknown: return "unknown";
    case ConsumableAttr::Consumed: return "consumed";
    case ConsumableAttr::Unconsumed: return "unconsumed";
    }
    llvm_unreachable("No enumerator with that value");
  }


  static bool classof(const Attr *A) { return A->getKind() == attr::Consumable; }
};

class ConsumableAutoCastAttr : public InheritableAttr {

public:
  static ConsumableAutoCastAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ConsumableAutoCastAttr *A = new (Ctx) ConsumableAutoCastAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ConsumableAutoCastAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::ConsumableAutoCast, R, SI, 0, 0)
  {
  }

  ConsumableAutoCastAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::ConsumableAutoCast; }
};

class ConsumableSetOnReadAttr : public InheritableAttr {

public:
  static ConsumableSetOnReadAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ConsumableSetOnReadAttr *A = new (Ctx) ConsumableSetOnReadAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ConsumableSetOnReadAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::ConsumableSetOnRead, R, SI, 0, 0)
  {
  }

  ConsumableSetOnReadAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::ConsumableSetOnRead; }
};

class DLLExportAttr : public InheritableAttr {

public:
  static DLLExportAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    DLLExportAttr *A = new (Ctx) DLLExportAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  DLLExportAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::DLLExport, R, SI, 0, 0)
  {
  }

  DLLExportAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::DLLExport; }
};

class DLLImportAttr : public InheritableAttr {

public:
  static DLLImportAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    DLLImportAttr *A = new (Ctx) DLLImportAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  DLLImportAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::DLLImport, R, SI, 0, 0)
  {
  }

  DLLImportAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::DLLImport; }
};

class DeprecatedAttr : public InheritableAttr {
unsigned messageLength;
char *message;


public:
  static DeprecatedAttr *CreateImplicit(ASTContext &Ctx, llvm::StringRef Message, SourceRange Loc = SourceRange()) {
    DeprecatedAttr *A = new (Ctx) DeprecatedAttr(Loc, Ctx, Message, 0);
    A->setImplicit(true);
    return A;
  }

  DeprecatedAttr(SourceRange R, ASTContext &Ctx
              , llvm::StringRef Message
              , unsigned SI
             )
    : InheritableAttr(attr::Deprecated, R, SI, 0, 0)
              , messageLength(Message.size()),message(new (Ctx, 1) char[messageLength])
  {
      if (!Message.empty())
        std::memcpy(message, Message.data(), messageLength);
  }

  DeprecatedAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Deprecated, R, SI, 0, 0)
              , messageLength(0),message(0)
  {
  }

  DeprecatedAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  llvm::StringRef getMessage() const {
    return llvm::StringRef(message, messageLength);
  }
  unsigned getMessageLength() const {
    return messageLength;
  }
  void setMessage(ASTContext &C, llvm::StringRef S) {
    messageLength = S.size();
    this->message = new (C, 1) char [messageLength];
    if (!S.empty())
      std::memcpy(this->message, S.data(), messageLength);
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::Deprecated; }
};

class DestructorAttr : public InheritableAttr {
int priority;


public:
  static DestructorAttr *CreateImplicit(ASTContext &Ctx, int Priority, SourceRange Loc = SourceRange()) {
    DestructorAttr *A = new (Ctx) DestructorAttr(Loc, Ctx, Priority, 0);
    A->setImplicit(true);
    return A;
  }

  DestructorAttr(SourceRange R, ASTContext &Ctx
              , int Priority
              , unsigned SI
             )
    : InheritableAttr(attr::Destructor, R, SI, 0, 0)
              , priority(Priority)
  {

  }

  DestructorAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Destructor, R, SI, 0, 0)
              , priority()
  {
  }

  DestructorAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  int getPriority() const {
    return priority;
  }

  static const int DefaultPriority = 65535;



  static bool classof(const Attr *A) { return A->getKind() == attr::Destructor; }
};

class EnableIfAttr : public InheritableAttr {
Expr * cond;

unsigned messageLength;
char *message;


public:
  static EnableIfAttr *CreateImplicit(ASTContext &Ctx, Expr * Cond, llvm::StringRef Message, SourceRange Loc = SourceRange()) {
    EnableIfAttr *A = new (Ctx) EnableIfAttr(Loc, Ctx, Cond, Message, 0);
    A->setImplicit(true);
    return A;
  }

  EnableIfAttr(SourceRange R, ASTContext &Ctx
              , Expr * Cond
              , llvm::StringRef Message
              , unsigned SI
             )
    : InheritableAttr(attr::EnableIf, R, SI, 0, 0)
              , cond(Cond)
              , messageLength(Message.size()),message(new (Ctx, 1) char[messageLength])
  {

      if (!Message.empty())
        std::memcpy(message, Message.data(), messageLength);
  }

  EnableIfAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Expr * getCond() const {
    return cond;
  }

  llvm::StringRef getMessage() const {
    return llvm::StringRef(message, messageLength);
  }
  unsigned getMessageLength() const {
    return messageLength;
  }
  void setMessage(ASTContext &C, llvm::StringRef S) {
    messageLength = S.size();
    this->message = new (C, 1) char [messageLength];
    if (!S.empty())
      std::memcpy(this->message, S.data(), messageLength);
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::EnableIf; }
};

class ExclusiveTrylockFunctionAttr : public InheritableAttr {
Expr * successValue;

  unsigned args_Size;
  Expr * *args_;


public:
  static ExclusiveTrylockFunctionAttr *CreateImplicit(ASTContext &Ctx, Expr * SuccessValue, Expr * *Args, unsigned ArgsSize, SourceRange Loc = SourceRange()) {
    ExclusiveTrylockFunctionAttr *A = new (Ctx) ExclusiveTrylockFunctionAttr(Loc, Ctx, SuccessValue, Args, ArgsSize, 0);
    A->setImplicit(true);
    return A;
  }

  ExclusiveTrylockFunctionAttr(SourceRange R, ASTContext &Ctx
              , Expr * SuccessValue
              , Expr * *Args, unsigned ArgsSize
              , unsigned SI
             )
    : InheritableAttr(attr::ExclusiveTrylockFunction, R, SI, 1, 1)
              , successValue(SuccessValue)
              , args_Size(ArgsSize), args_(new (Ctx, 16) Expr *[args_Size])
  {

    std::copy(Args, Args + args_Size, args_);
  }

  ExclusiveTrylockFunctionAttr(SourceRange R, ASTContext &Ctx
              , Expr * SuccessValue
              , unsigned SI
             )
    : InheritableAttr(attr::ExclusiveTrylockFunction, R, SI, 1, 1)
              , successValue()
              , args_Size(0), args_(nullptr)
  {

  }

  ExclusiveTrylockFunctionAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Expr * getSuccessValue() const {
    return successValue;
  }

  typedef Expr ** args_iterator;
  args_iterator args_begin() const { return args_; }
  args_iterator args_end() const { return args_ + args_Size; }
  unsigned args_size() const { return args_Size; }
  llvm::iterator_range<args_iterator> args() const { return llvm::make_range(args_begin(), args_end()); }




  static bool classof(const Attr *A) { return A->getKind() == attr::ExclusiveTrylockFunction; }
};

class FallThroughAttr : public Attr {

public:
  static FallThroughAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    FallThroughAttr *A = new (Ctx) FallThroughAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  FallThroughAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : Attr(attr::FallThrough, R, SI, 0, 0)
  {
  }

  FallThroughAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::FallThrough; }
};

class FastCallAttr : public InheritableAttr {

public:
  static FastCallAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    FastCallAttr *A = new (Ctx) FastCallAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  FastCallAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::FastCall, R, SI, 0, 0)
  {
  }

  FastCallAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::FastCall; }
};

class FinalAttr : public InheritableAttr {

public:
  enum Spelling {
    Keyword_final = 0,
    Keyword_sealed = 1
  };

  static FinalAttr *CreateImplicit(ASTContext &Ctx, Spelling S, SourceRange Loc = SourceRange()) {
    FinalAttr *A = new (Ctx) FinalAttr(Loc, Ctx, S);
    A->setImplicit(true);
    return A;
  }

  FinalAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Final, R, SI, 0, 0)
  {
  }

  FinalAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Spelling getSemanticSpelling() const {
  switch (SpellingListIndex) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return Keyword_final;
    case 1: return Keyword_sealed;
  }
  }
  bool isSpelledAsSealed() const { return SpellingListIndex == 1; }


  static bool classof(const Attr *A) { return A->getKind() == attr::Final; }
};

class FlagEnumAttr : public InheritableAttr {

public:
  static FlagEnumAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    FlagEnumAttr *A = new (Ctx) FlagEnumAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  FlagEnumAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::FlagEnum, R, SI, 0, 0)
  {
  }

  FlagEnumAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;

private:
    llvm::APInt FlagBits;
public:
    llvm::APInt &getFlagBits() {
      return FlagBits;
    }

    const llvm::APInt &getFlagBits() const {
      return FlagBits;
    }


  static bool classof(const Attr *A) { return A->getKind() == attr::FlagEnum; }
};

class FlattenAttr : public InheritableAttr {

public:
  static FlattenAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    FlattenAttr *A = new (Ctx) FlattenAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  FlattenAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Flatten, R, SI, 0, 0)
  {
  }

  FlattenAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::Flatten; }
};

class FormatAttr : public InheritableAttr {
IdentifierInfo * type;

int formatIdx;

int firstArg;


public:
  static FormatAttr *CreateImplicit(ASTContext &Ctx, IdentifierInfo * Type, int FormatIdx, int FirstArg, SourceRange Loc = SourceRange()) {
    FormatAttr *A = new (Ctx) FormatAttr(Loc, Ctx, Type, FormatIdx, FirstArg, 0);
    A->setImplicit(true);
    return A;
  }

  FormatAttr(SourceRange R, ASTContext &Ctx
              , IdentifierInfo * Type
              , int FormatIdx
              , int FirstArg
              , unsigned SI
             )
    : InheritableAttr(attr::Format, R, SI, 0, 0)
              , type(Type)
              , formatIdx(FormatIdx)
              , firstArg(FirstArg)
  {



  }

  FormatAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  IdentifierInfo * getType() const {
    return type;
  }

  int getFormatIdx() const {
    return formatIdx;
  }

  int getFirstArg() const {
    return firstArg;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::Format; }
};

class FormatArgAttr : public InheritableAttr {
int formatIdx;


public:
  static FormatArgAttr *CreateImplicit(ASTContext &Ctx, int FormatIdx, SourceRange Loc = SourceRange()) {
    FormatArgAttr *A = new (Ctx) FormatArgAttr(Loc, Ctx, FormatIdx, 0);
    A->setImplicit(true);
    return A;
  }

  FormatArgAttr(SourceRange R, ASTContext &Ctx
              , int FormatIdx
              , unsigned SI
             )
    : InheritableAttr(attr::FormatArg, R, SI, 0, 0)
              , formatIdx(FormatIdx)
  {

  }

  FormatArgAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  int getFormatIdx() const {
    return formatIdx;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::FormatArg; }
};

class GNUInlineAttr : public InheritableAttr {

public:
  static GNUInlineAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    GNUInlineAttr *A = new (Ctx) GNUInlineAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  GNUInlineAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::GNUInline, R, SI, 0, 0)
  {
  }

  GNUInlineAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::GNUInline; }
};

class GuardedByAttr : public InheritableAttr {
Expr * arg;


public:
  static GuardedByAttr *CreateImplicit(ASTContext &Ctx, Expr * Arg, SourceRange Loc = SourceRange()) {
    GuardedByAttr *A = new (Ctx) GuardedByAttr(Loc, Ctx, Arg, 0);
    A->setImplicit(true);
    return A;
  }

  GuardedByAttr(SourceRange R, ASTContext &Ctx
              , Expr * Arg
              , unsigned SI
             )
    : InheritableAttr(attr::GuardedBy, R, SI, 1, 1)
              , arg(Arg)
  {

  }

  GuardedByAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Expr * getArg() const {
    return arg;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::GuardedBy; }
};

class GuardedVarAttr : public InheritableAttr {

public:
  static GuardedVarAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    GuardedVarAttr *A = new (Ctx) GuardedVarAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  GuardedVarAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::GuardedVar, R, SI, 0, 0)
  {
  }

  GuardedVarAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::GuardedVar; }
};

class HotAttr : public InheritableAttr {

public:
  static HotAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    HotAttr *A = new (Ctx) HotAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  HotAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Hot, R, SI, 0, 0)
  {
  }

  HotAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::Hot; }
};

class IBActionAttr : public InheritableAttr {

public:
  static IBActionAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    IBActionAttr *A = new (Ctx) IBActionAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  IBActionAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::IBAction, R, SI, 0, 0)
  {
  }

  IBActionAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::IBAction; }
};

class IBOutletAttr : public InheritableAttr {

public:
  static IBOutletAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    IBOutletAttr *A = new (Ctx) IBOutletAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  IBOutletAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::IBOutlet, R, SI, 0, 0)
  {
  }

  IBOutletAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::IBOutlet; }
};

class IBOutletCollectionAttr : public InheritableAttr {
TypeSourceInfo * interface;


public:
  static IBOutletCollectionAttr *CreateImplicit(ASTContext &Ctx, TypeSourceInfo * Interface, SourceRange Loc = SourceRange()) {
    IBOutletCollectionAttr *A = new (Ctx) IBOutletCollectionAttr(Loc, Ctx, Interface, 0);
    A->setImplicit(true);
    return A;
  }

  IBOutletCollectionAttr(SourceRange R, ASTContext &Ctx
              , TypeSourceInfo * Interface
              , unsigned SI
             )
    : InheritableAttr(attr::IBOutletCollection, R, SI, 0, 0)
              , interface(Interface)
  {

  }

  IBOutletCollectionAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::IBOutletCollection, R, SI, 0, 0)
              , interface()
  {
  }

  IBOutletCollectionAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  QualType getInterface() const {
    return interface->getType();
  }  TypeSourceInfo * getInterfaceLoc() const {
    return interface;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::IBOutletCollection; }
};

class InitPriorityAttr : public InheritableAttr {
unsigned priority;


public:
  static InitPriorityAttr *CreateImplicit(ASTContext &Ctx, unsigned Priority, SourceRange Loc = SourceRange()) {
    InitPriorityAttr *A = new (Ctx) InitPriorityAttr(Loc, Ctx, Priority, 0);
    A->setImplicit(true);
    return A;
  }

  InitPriorityAttr(SourceRange R, ASTContext &Ctx
              , unsigned Priority
              , unsigned SI
             )
    : InheritableAttr(attr::InitPriority, R, SI, 0, 0)
              , priority(Priority)
  {

  }

  InitPriorityAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  unsigned getPriority() const {
    return priority;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::InitPriority; }
};

class InitSegAttr : public Attr {
unsigned sectionLength;
char *section;


public:
  static InitSegAttr *CreateImplicit(ASTContext &Ctx, llvm::StringRef Section, SourceRange Loc = SourceRange()) {
    InitSegAttr *A = new (Ctx) InitSegAttr(Loc, Ctx, Section, 0);
    A->setImplicit(true);
    return A;
  }

  InitSegAttr(SourceRange R, ASTContext &Ctx
              , llvm::StringRef Section
              , unsigned SI
             )
    : Attr(attr::InitSeg, R, SI, 0, 0)
              , sectionLength(Section.size()),section(new (Ctx, 1) char[sectionLength])
  {
      if (!Section.empty())
        std::memcpy(section, Section.data(), sectionLength);
  }

  InitSegAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  llvm::StringRef getSection() const {
    return llvm::StringRef(section, sectionLength);
  }
  unsigned getSectionLength() const {
    return sectionLength;
  }
  void setSection(ASTContext &C, llvm::StringRef S) {
    sectionLength = S.size();
    this->section = new (C, 1) char [sectionLength];
    if (!S.empty())
      std::memcpy(this->section, S.data(), sectionLength);
  }


  void printPrettyPragma(raw_ostream &OS, const PrintingPolicy &Policy) const {
    OS << '(' << getSection() << ')';
  }
  

  static bool classof(const Attr *A) { return A->getKind() == attr::InitSeg; }
};

class IntelOclBiccAttr : public InheritableAttr {

public:
  static IntelOclBiccAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    IntelOclBiccAttr *A = new (Ctx) IntelOclBiccAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  IntelOclBiccAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::IntelOclBicc, R, SI, 0, 0)
  {
  }

  IntelOclBiccAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::IntelOclBicc; }
};

class LockReturnedAttr : public InheritableAttr {
Expr * arg;


public:
  static LockReturnedAttr *CreateImplicit(ASTContext &Ctx, Expr * Arg, SourceRange Loc = SourceRange()) {
    LockReturnedAttr *A = new (Ctx) LockReturnedAttr(Loc, Ctx, Arg, 0);
    A->setImplicit(true);
    return A;
  }

  LockReturnedAttr(SourceRange R, ASTContext &Ctx
              , Expr * Arg
              , unsigned SI
             )
    : InheritableAttr(attr::LockReturned, R, SI, 1, 0)
              , arg(Arg)
  {

  }

  LockReturnedAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Expr * getArg() const {
    return arg;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::LockReturned; }
};

class LocksExcludedAttr : public InheritableAttr {
  unsigned args_Size;
  Expr * *args_;


public:
  static LocksExcludedAttr *CreateImplicit(ASTContext &Ctx, Expr * *Args, unsigned ArgsSize, SourceRange Loc = SourceRange()) {
    LocksExcludedAttr *A = new (Ctx) LocksExcludedAttr(Loc, Ctx, Args, ArgsSize, 0);
    A->setImplicit(true);
    return A;
  }

  LocksExcludedAttr(SourceRange R, ASTContext &Ctx
              , Expr * *Args, unsigned ArgsSize
              , unsigned SI
             )
    : InheritableAttr(attr::LocksExcluded, R, SI, 1, 1)
              , args_Size(ArgsSize), args_(new (Ctx, 16) Expr *[args_Size])
  {
    std::copy(Args, Args + args_Size, args_);
  }

  LocksExcludedAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::LocksExcluded, R, SI, 1, 1)
              , args_Size(0), args_(nullptr)
  {
  }

  LocksExcludedAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  typedef Expr ** args_iterator;
  args_iterator args_begin() const { return args_; }
  args_iterator args_end() const { return args_ + args_Size; }
  unsigned args_size() const { return args_Size; }
  llvm::iterator_range<args_iterator> args() const { return llvm::make_range(args_begin(), args_end()); }




  static bool classof(const Attr *A) { return A->getKind() == attr::LocksExcluded; }
};

class LoopHintAttr : public Attr {
public:
  enum OptionType {
    Vectorize,
    VectorizeWidth,
    Interleave,
    InterleaveCount,
    Unroll,
    UnrollCount
  };
private:
  OptionType option;

public:
  enum LoopHintState {
    Default,
    Enable,
    Disable,
    AssumeSafety
  };
private:
  LoopHintState state;

Expr * value;


public:
  enum Spelling {
    Pragma_clang_loop = 0,
    Pragma_unroll = 1,
    Pragma_nounroll = 2
  };

  static LoopHintAttr *CreateImplicit(ASTContext &Ctx, Spelling S, OptionType Option, LoopHintState State, Expr * Value, SourceRange Loc = SourceRange()) {
    LoopHintAttr *A = new (Ctx) LoopHintAttr(Loc, Ctx, Option, State, Value, S);
    A->setImplicit(true);
    return A;
  }

  LoopHintAttr(SourceRange R, ASTContext &Ctx
              , OptionType Option
              , LoopHintState State
              , Expr * Value
              , unsigned SI
             )
    : Attr(attr::LoopHint, R, SI, 0, 0)
              , option(Option)
              , state(State)
              , value(Value)
  {



  }

  LoopHintAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Spelling getSemanticSpelling() const {
  switch (SpellingListIndex) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return Pragma_clang_loop;
    case 1: return Pragma_unroll;
    case 2: return Pragma_nounroll;
  }
  }
  OptionType getOption() const {
    return option;
  }

  static bool ConvertStrToOptionType(StringRef Val, OptionType &Out) {
    Optional<OptionType> R = llvm::StringSwitch<Optional<OptionType>>(Val)
      .Case("vectorize", LoopHintAttr::Vectorize)
      .Case("vectorize_width", LoopHintAttr::VectorizeWidth)
      .Case("interleave", LoopHintAttr::Interleave)
      .Case("interleave_count", LoopHintAttr::InterleaveCount)
      .Case("unroll", LoopHintAttr::Unroll)
      .Case("unroll_count", LoopHintAttr::UnrollCount)
      .Default(Optional<OptionType>());
    if (R) {
      Out = *R;
      return true;
    }
    return false;
  }

  static const char *ConvertOptionTypeToStr(OptionType Val) {
    switch(Val) {
    case LoopHintAttr::Vectorize: return "vectorize";
    case LoopHintAttr::VectorizeWidth: return "vectorize_width";
    case LoopHintAttr::Interleave: return "interleave";
    case LoopHintAttr::InterleaveCount: return "interleave_count";
    case LoopHintAttr::Unroll: return "unroll";
    case LoopHintAttr::UnrollCount: return "unroll_count";
    }
    llvm_unreachable("No enumerator with that value");
  }
  LoopHintState getState() const {
    return state;
  }

  static bool ConvertStrToLoopHintState(StringRef Val, LoopHintState &Out) {
    Optional<LoopHintState> R = llvm::StringSwitch<Optional<LoopHintState>>(Val)
      .Case("default", LoopHintAttr::Default)
      .Case("enable", LoopHintAttr::Enable)
      .Case("disable", LoopHintAttr::Disable)
      .Case("assume_safety", LoopHintAttr::AssumeSafety)
      .Default(Optional<LoopHintState>());
    if (R) {
      Out = *R;
      return true;
    }
    return false;
  }

  static const char *ConvertLoopHintStateToStr(LoopHintState Val) {
    switch(Val) {
    case LoopHintAttr::Default: return "default";
    case LoopHintAttr::Enable: return "enable";
    case LoopHintAttr::Disable: return "disable";
    case LoopHintAttr::AssumeSafety: return "assume_safety";
    }
    llvm_unreachable("No enumerator with that value");
  }
  Expr * getValue() const {
    return value;
  }


  static const char *getOptionName(int Option) {
    switch(Option) {
    case Vectorize: return "vectorize";
    case VectorizeWidth: return "vectorize_width";
    case Interleave: return "interleave";
    case InterleaveCount: return "interleave_count";
    case Unroll: return "unroll";
    case UnrollCount: return "unroll_count";
    }
    llvm_unreachable("Unhandled LoopHint option.");
  }

  void printPrettyPragma(raw_ostream &OS, const PrintingPolicy &Policy) const {
    unsigned SpellingIndex = getSpellingListIndex();
    // For "#pragma unroll" and "#pragma nounroll" the string "unroll" or
    // "nounroll" is already emitted as the pragma name.
    if (SpellingIndex == Pragma_nounroll) {
      OS << "\n";
      return;
    }
    else if (SpellingIndex == Pragma_unroll) {
      OS << getValueString(Policy) << "\n";
      return;
    }

    assert(SpellingIndex == Pragma_clang_loop && "Unexpected spelling");
    OS << getOptionName(option) << getValueString(Policy) << "\n";
  }

  // Return a string containing the loop hint argument including the
  // enclosing parentheses.
  std::string getValueString(const PrintingPolicy &Policy) const {
    std::string ValueName;
    llvm::raw_string_ostream OS(ValueName);
    OS << "(";
    if (option == VectorizeWidth || option == InterleaveCount ||
        option == UnrollCount)
      value->printPretty(OS, nullptr, Policy);
    else if (state == Default)
      return "";
    else if (state == Enable)
      OS << (option == Unroll ? "full" : "enable");
    else if (state == AssumeSafety)
      OS << "assume_safety";
    else
      OS << "disable";
    OS << ")";
    return OS.str();
  }

  // Return a string suitable for identifying this attribute in diagnostics.
  std::string getDiagnosticName(const PrintingPolicy &Policy) const {
    unsigned SpellingIndex = getSpellingListIndex();
    if (SpellingIndex == Pragma_nounroll)
      return "#pragma nounroll";
    else if (SpellingIndex == Pragma_unroll)
      return "#pragma unroll" + getValueString(Policy);

    assert(SpellingIndex == Pragma_clang_loop && "Unexpected spelling");
    return getOptionName(option) + getValueString(Policy);
  }
  

  static bool classof(const Attr *A) { return A->getKind() == attr::LoopHint; }
};

class MSABIAttr : public InheritableAttr {

public:
  static MSABIAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    MSABIAttr *A = new (Ctx) MSABIAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  MSABIAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::MSABI, R, SI, 0, 0)
  {
  }

  MSABIAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::MSABI; }
};

class MSInheritanceAttr : public InheritableAttr {
bool bestCase;


public:
  enum Spelling {
    Keyword_single_inheritance = 0,
    Keyword_multiple_inheritance = 1,
    Keyword_virtual_inheritance = 2,
    Keyword_unspecified_inheritance = 3
  };

  static MSInheritanceAttr *CreateImplicit(ASTContext &Ctx, Spelling S, bool BestCase, SourceRange Loc = SourceRange()) {
    MSInheritanceAttr *A = new (Ctx) MSInheritanceAttr(Loc, Ctx, BestCase, S);
    A->setImplicit(true);
    return A;
  }

  MSInheritanceAttr(SourceRange R, ASTContext &Ctx
              , bool BestCase
              , unsigned SI
             )
    : InheritableAttr(attr::MSInheritance, R, SI, 0, 0)
              , bestCase(BestCase)
  {

  }

  MSInheritanceAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::MSInheritance, R, SI, 0, 0)
              , bestCase()
  {
  }

  MSInheritanceAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Spelling getSemanticSpelling() const {
  switch (SpellingListIndex) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return Keyword_single_inheritance;
    case 1: return Keyword_multiple_inheritance;
    case 2: return Keyword_virtual_inheritance;
    case 3: return Keyword_unspecified_inheritance;
  }
  }
  bool getBestCase() const {
    return bestCase;
  }

  static const bool DefaultBestCase = 1;


  static bool hasVBPtrOffsetField(Spelling Inheritance) {
    return Inheritance == Keyword_unspecified_inheritance;
  }

  // Only member pointers to functions need a this adjustment, since it can be
  // combined with the field offset for data pointers.
  static bool hasNVOffsetField(bool IsMemberFunction, Spelling Inheritance) {
    return IsMemberFunction && Inheritance >= Keyword_multiple_inheritance;
  }

  static bool hasVBTableOffsetField(Spelling Inheritance) {
    return Inheritance >= Keyword_virtual_inheritance;
  }

  static bool hasOnlyOneField(bool IsMemberFunction,
                              Spelling Inheritance) {
    if (IsMemberFunction)
      return Inheritance <= Keyword_single_inheritance;
    return Inheritance <= Keyword_multiple_inheritance;
  }
  

  static bool classof(const Attr *A) { return A->getKind() == attr::MSInheritance; }
};

class MSNoVTableAttr : public InheritableAttr {

public:
  static MSNoVTableAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    MSNoVTableAttr *A = new (Ctx) MSNoVTableAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  MSNoVTableAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::MSNoVTable, R, SI, 0, 0)
  {
  }

  MSNoVTableAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::MSNoVTable; }
};

class MSP430InterruptAttr : public InheritableAttr {
unsigned number;


public:
  static MSP430InterruptAttr *CreateImplicit(ASTContext &Ctx, unsigned Number, SourceRange Loc = SourceRange()) {
    MSP430InterruptAttr *A = new (Ctx) MSP430InterruptAttr(Loc, Ctx, Number, 0);
    A->setImplicit(true);
    return A;
  }

  MSP430InterruptAttr(SourceRange R, ASTContext &Ctx
              , unsigned Number
              , unsigned SI
             )
    : InheritableAttr(attr::MSP430Interrupt, R, SI, 0, 0)
              , number(Number)
  {

  }

  MSP430InterruptAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  unsigned getNumber() const {
    return number;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::MSP430Interrupt; }
};

class MSStructAttr : public InheritableAttr {

public:
  static MSStructAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    MSStructAttr *A = new (Ctx) MSStructAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  MSStructAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::MSStruct, R, SI, 0, 0)
  {
  }

  MSStructAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::MSStruct; }
};

class MSVtorDispAttr : public InheritableAttr {
unsigned vdm;


public:
  static MSVtorDispAttr *CreateImplicit(ASTContext &Ctx, unsigned Vdm, SourceRange Loc = SourceRange()) {
    MSVtorDispAttr *A = new (Ctx) MSVtorDispAttr(Loc, Ctx, Vdm, 0);
    A->setImplicit(true);
    return A;
  }

  MSVtorDispAttr(SourceRange R, ASTContext &Ctx
              , unsigned Vdm
              , unsigned SI
             )
    : InheritableAttr(attr::MSVtorDisp, R, SI, 0, 0)
              , vdm(Vdm)
  {

  }

  MSVtorDispAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  unsigned getVdm() const {
    return vdm;
  }


  enum Mode {
    Never,
    ForVBaseOverride,
    ForVFTable
  };

  Mode getVtorDispMode() const { return Mode(vdm); }
  

  static bool classof(const Attr *A) { return A->getKind() == attr::MSVtorDisp; }
};

class MaxFieldAlignmentAttr : public InheritableAttr {
unsigned alignment;


public:
  static MaxFieldAlignmentAttr *CreateImplicit(ASTContext &Ctx, unsigned Alignment, SourceRange Loc = SourceRange()) {
    MaxFieldAlignmentAttr *A = new (Ctx) MaxFieldAlignmentAttr(Loc, Ctx, Alignment, 0);
    A->setImplicit(true);
    return A;
  }

  MaxFieldAlignmentAttr(SourceRange R, ASTContext &Ctx
              , unsigned Alignment
              , unsigned SI
             )
    : InheritableAttr(attr::MaxFieldAlignment, R, SI, 0, 0)
              , alignment(Alignment)
  {

  }

  MaxFieldAlignmentAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  unsigned getAlignment() const {
    return alignment;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::MaxFieldAlignment; }
};

class MayAliasAttr : public InheritableAttr {

public:
  static MayAliasAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    MayAliasAttr *A = new (Ctx) MayAliasAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  MayAliasAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::MayAlias, R, SI, 0, 0)
  {
  }

  MayAliasAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::MayAlias; }
};

class MinSizeAttr : public InheritableAttr {

public:
  static MinSizeAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    MinSizeAttr *A = new (Ctx) MinSizeAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  MinSizeAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::MinSize, R, SI, 0, 0)
  {
  }

  MinSizeAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::MinSize; }
};

class Mips16Attr : public InheritableAttr {

public:
  static Mips16Attr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    Mips16Attr *A = new (Ctx) Mips16Attr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  Mips16Attr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Mips16, R, SI, 0, 0)
  {
  }

  Mips16Attr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::Mips16; }
};

class ModeAttr : public Attr {
IdentifierInfo * mode;


public:
  static ModeAttr *CreateImplicit(ASTContext &Ctx, IdentifierInfo * Mode, SourceRange Loc = SourceRange()) {
    ModeAttr *A = new (Ctx) ModeAttr(Loc, Ctx, Mode, 0);
    A->setImplicit(true);
    return A;
  }

  ModeAttr(SourceRange R, ASTContext &Ctx
              , IdentifierInfo * Mode
              , unsigned SI
             )
    : Attr(attr::Mode, R, SI, 0, 0)
              , mode(Mode)
  {

  }

  ModeAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  IdentifierInfo * getMode() const {
    return mode;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::Mode; }
};

class NSConsumedAttr : public InheritableParamAttr {

public:
  static NSConsumedAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    NSConsumedAttr *A = new (Ctx) NSConsumedAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  NSConsumedAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableParamAttr(attr::NSConsumed, R, SI, 0, 0)
  {
  }

  NSConsumedAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::NSConsumed; }
};

class NSConsumesSelfAttr : public InheritableAttr {

public:
  static NSConsumesSelfAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    NSConsumesSelfAttr *A = new (Ctx) NSConsumesSelfAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  NSConsumesSelfAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::NSConsumesSelf, R, SI, 0, 0)
  {
  }

  NSConsumesSelfAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::NSConsumesSelf; }
};

class NSReturnsAutoreleasedAttr : public InheritableAttr {

public:
  static NSReturnsAutoreleasedAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    NSReturnsAutoreleasedAttr *A = new (Ctx) NSReturnsAutoreleasedAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  NSReturnsAutoreleasedAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::NSReturnsAutoreleased, R, SI, 0, 0)
  {
  }

  NSReturnsAutoreleasedAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::NSReturnsAutoreleased; }
};

class NSReturnsNotRetainedAttr : public InheritableAttr {

public:
  static NSReturnsNotRetainedAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    NSReturnsNotRetainedAttr *A = new (Ctx) NSReturnsNotRetainedAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  NSReturnsNotRetainedAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::NSReturnsNotRetained, R, SI, 0, 0)
  {
  }

  NSReturnsNotRetainedAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::NSReturnsNotRetained; }
};

class NSReturnsRetainedAttr : public InheritableAttr {

public:
  static NSReturnsRetainedAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    NSReturnsRetainedAttr *A = new (Ctx) NSReturnsRetainedAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  NSReturnsRetainedAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::NSReturnsRetained, R, SI, 0, 0)
  {
  }

  NSReturnsRetainedAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::NSReturnsRetained; }
};

class NakedAttr : public InheritableAttr {

public:
  static NakedAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    NakedAttr *A = new (Ctx) NakedAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  NakedAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Naked, R, SI, 0, 0)
  {
  }

  NakedAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::Naked; }
};

class NoCommonAttr : public InheritableAttr {

public:
  static NoCommonAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    NoCommonAttr *A = new (Ctx) NoCommonAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  NoCommonAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::NoCommon, R, SI, 0, 0)
  {
  }

  NoCommonAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::NoCommon; }
};

class NoDebugAttr : public InheritableAttr {

public:
  static NoDebugAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    NoDebugAttr *A = new (Ctx) NoDebugAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  NoDebugAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::NoDebug, R, SI, 0, 0)
  {
  }

  NoDebugAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::NoDebug; }
};

class NoDuplicateAttr : public InheritableAttr {

public:
  static NoDuplicateAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    NoDuplicateAttr *A = new (Ctx) NoDuplicateAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  NoDuplicateAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::NoDuplicate, R, SI, 0, 0)
  {
  }

  NoDuplicateAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::NoDuplicate; }
};

class NoInlineAttr : public InheritableAttr {

public:
  static NoInlineAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    NoInlineAttr *A = new (Ctx) NoInlineAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  NoInlineAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::NoInline, R, SI, 0, 0)
  {
  }

  NoInlineAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::NoInline; }
};

class NoInstrumentFunctionAttr : public InheritableAttr {

public:
  static NoInstrumentFunctionAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    NoInstrumentFunctionAttr *A = new (Ctx) NoInstrumentFunctionAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  NoInstrumentFunctionAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::NoInstrumentFunction, R, SI, 0, 0)
  {
  }

  NoInstrumentFunctionAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::NoInstrumentFunction; }
};

class NoMips16Attr : public InheritableAttr {

public:
  static NoMips16Attr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    NoMips16Attr *A = new (Ctx) NoMips16Attr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  NoMips16Attr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::NoMips16, R, SI, 0, 0)
  {
  }

  NoMips16Attr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::NoMips16; }
};

class NoReturnAttr : public InheritableAttr {

public:
  static NoReturnAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    NoReturnAttr *A = new (Ctx) NoReturnAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  NoReturnAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::NoReturn, R, SI, 0, 0)
  {
  }

  NoReturnAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::NoReturn; }
};

class NoSanitizeAttr : public InheritableAttr {
  unsigned sanitizers_Size;
  std::string *sanitizers_;


public:
  static NoSanitizeAttr *CreateImplicit(ASTContext &Ctx, std::string *Sanitizers, unsigned SanitizersSize, SourceRange Loc = SourceRange()) {
    NoSanitizeAttr *A = new (Ctx) NoSanitizeAttr(Loc, Ctx, Sanitizers, SanitizersSize, 0);
    A->setImplicit(true);
    return A;
  }

  NoSanitizeAttr(SourceRange R, ASTContext &Ctx
              , std::string *Sanitizers, unsigned SanitizersSize
              , unsigned SI
             )
    : InheritableAttr(attr::NoSanitize, R, SI, 0, 0)
              , sanitizers_Size(SanitizersSize), sanitizers_(new (Ctx, 16) std::string[sanitizers_Size])
  {
    std::copy(Sanitizers, Sanitizers + sanitizers_Size, sanitizers_);
  }

  NoSanitizeAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::NoSanitize, R, SI, 0, 0)
              , sanitizers_Size(0), sanitizers_(nullptr)
  {
  }

  NoSanitizeAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  typedef std::string* sanitizers_iterator;
  sanitizers_iterator sanitizers_begin() const { return sanitizers_; }
  sanitizers_iterator sanitizers_end() const { return sanitizers_ + sanitizers_Size; }
  unsigned sanitizers_size() const { return sanitizers_Size; }
  llvm::iterator_range<sanitizers_iterator> sanitizers() const { return llvm::make_range(sanitizers_begin(), sanitizers_end()); }



    SanitizerMask getMask() const {
      SanitizerMask Mask = 0;
      for (auto SanitizerName : sanitizers()) {
        SanitizerMask ParsedMask =
            parseSanitizerValue(SanitizerName, /*AllowGroups=*/true);
        Mask |= expandSanitizerGroups(ParsedMask);
      }
      return Mask;
    }
  

  static bool classof(const Attr *A) { return A->getKind() == attr::NoSanitize; }
};

class NoSplitStackAttr : public InheritableAttr {

public:
  static NoSplitStackAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    NoSplitStackAttr *A = new (Ctx) NoSplitStackAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  NoSplitStackAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::NoSplitStack, R, SI, 0, 0)
  {
  }

  NoSplitStackAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::NoSplitStack; }
};

class NoThreadSafetyAnalysisAttr : public InheritableAttr {

public:
  static NoThreadSafetyAnalysisAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    NoThreadSafetyAnalysisAttr *A = new (Ctx) NoThreadSafetyAnalysisAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  NoThreadSafetyAnalysisAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::NoThreadSafetyAnalysis, R, SI, 0, 0)
  {
  }

  NoThreadSafetyAnalysisAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::NoThreadSafetyAnalysis; }
};

class NoThrowAttr : public InheritableAttr {

public:
  static NoThrowAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    NoThrowAttr *A = new (Ctx) NoThrowAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  NoThrowAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::NoThrow, R, SI, 0, 0)
  {
  }

  NoThrowAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::NoThrow; }
};

class NonNullAttr : public InheritableAttr {
  unsigned args_Size;
  unsigned *args_;


public:
  static NonNullAttr *CreateImplicit(ASTContext &Ctx, unsigned *Args, unsigned ArgsSize, SourceRange Loc = SourceRange()) {
    NonNullAttr *A = new (Ctx) NonNullAttr(Loc, Ctx, Args, ArgsSize, 0);
    A->setImplicit(true);
    return A;
  }

  NonNullAttr(SourceRange R, ASTContext &Ctx
              , unsigned *Args, unsigned ArgsSize
              , unsigned SI
             )
    : InheritableAttr(attr::NonNull, R, SI, 0, 1)
              , args_Size(ArgsSize), args_(new (Ctx, 16) unsigned[args_Size])
  {
    std::copy(Args, Args + args_Size, args_);
  }

  NonNullAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::NonNull, R, SI, 0, 1)
              , args_Size(0), args_(nullptr)
  {
  }

  NonNullAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  typedef unsigned* args_iterator;
  args_iterator args_begin() const { return args_; }
  args_iterator args_end() const { return args_ + args_Size; }
  unsigned args_size() const { return args_Size; }
  llvm::iterator_range<args_iterator> args() const { return llvm::make_range(args_begin(), args_end()); }


bool isNonNull(unsigned idx) const {
    if (!args_size())
      return true;
    for (const auto &V : args())
      if (V == idx)
        return true;
    return false;
  } 

  static bool classof(const Attr *A) { return A->getKind() == attr::NonNull; }
};

class OMPThreadPrivateDeclAttr : public InheritableAttr {

public:
  static OMPThreadPrivateDeclAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    OMPThreadPrivateDeclAttr *A = new (Ctx) OMPThreadPrivateDeclAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  OMPThreadPrivateDeclAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::OMPThreadPrivateDecl, R, SI, 0, 0)
  {
  }

  OMPThreadPrivateDeclAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::OMPThreadPrivateDecl; }
};

class ObjCBoxableAttr : public Attr {

public:
  static ObjCBoxableAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ObjCBoxableAttr *A = new (Ctx) ObjCBoxableAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ObjCBoxableAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : Attr(attr::ObjCBoxable, R, SI, 0, 0)
  {
  }

  ObjCBoxableAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::ObjCBoxable; }
};

class ObjCBridgeAttr : public InheritableAttr {
IdentifierInfo * bridgedType;


public:
  static ObjCBridgeAttr *CreateImplicit(ASTContext &Ctx, IdentifierInfo * BridgedType, SourceRange Loc = SourceRange()) {
    ObjCBridgeAttr *A = new (Ctx) ObjCBridgeAttr(Loc, Ctx, BridgedType, 0);
    A->setImplicit(true);
    return A;
  }

  ObjCBridgeAttr(SourceRange R, ASTContext &Ctx
              , IdentifierInfo * BridgedType
              , unsigned SI
             )
    : InheritableAttr(attr::ObjCBridge, R, SI, 0, 0)
              , bridgedType(BridgedType)
  {

  }

  ObjCBridgeAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  IdentifierInfo * getBridgedType() const {
    return bridgedType;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::ObjCBridge; }
};

class ObjCBridgeMutableAttr : public InheritableAttr {
IdentifierInfo * bridgedType;


public:
  static ObjCBridgeMutableAttr *CreateImplicit(ASTContext &Ctx, IdentifierInfo * BridgedType, SourceRange Loc = SourceRange()) {
    ObjCBridgeMutableAttr *A = new (Ctx) ObjCBridgeMutableAttr(Loc, Ctx, BridgedType, 0);
    A->setImplicit(true);
    return A;
  }

  ObjCBridgeMutableAttr(SourceRange R, ASTContext &Ctx
              , IdentifierInfo * BridgedType
              , unsigned SI
             )
    : InheritableAttr(attr::ObjCBridgeMutable, R, SI, 0, 0)
              , bridgedType(BridgedType)
  {

  }

  ObjCBridgeMutableAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  IdentifierInfo * getBridgedType() const {
    return bridgedType;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::ObjCBridgeMutable; }
};

class ObjCBridgeRelatedAttr : public InheritableAttr {
IdentifierInfo * relatedClass;

IdentifierInfo * classMethod;

IdentifierInfo * instanceMethod;


public:
  static ObjCBridgeRelatedAttr *CreateImplicit(ASTContext &Ctx, IdentifierInfo * RelatedClass, IdentifierInfo * ClassMethod, IdentifierInfo * InstanceMethod, SourceRange Loc = SourceRange()) {
    ObjCBridgeRelatedAttr *A = new (Ctx) ObjCBridgeRelatedAttr(Loc, Ctx, RelatedClass, ClassMethod, InstanceMethod, 0);
    A->setImplicit(true);
    return A;
  }

  ObjCBridgeRelatedAttr(SourceRange R, ASTContext &Ctx
              , IdentifierInfo * RelatedClass
              , IdentifierInfo * ClassMethod
              , IdentifierInfo * InstanceMethod
              , unsigned SI
             )
    : InheritableAttr(attr::ObjCBridgeRelated, R, SI, 0, 0)
              , relatedClass(RelatedClass)
              , classMethod(ClassMethod)
              , instanceMethod(InstanceMethod)
  {



  }

  ObjCBridgeRelatedAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  IdentifierInfo * getRelatedClass() const {
    return relatedClass;
  }

  IdentifierInfo * getClassMethod() const {
    return classMethod;
  }

  IdentifierInfo * getInstanceMethod() const {
    return instanceMethod;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::ObjCBridgeRelated; }
};

class ObjCDesignatedInitializerAttr : public Attr {

public:
  static ObjCDesignatedInitializerAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ObjCDesignatedInitializerAttr *A = new (Ctx) ObjCDesignatedInitializerAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ObjCDesignatedInitializerAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : Attr(attr::ObjCDesignatedInitializer, R, SI, 0, 0)
  {
  }

  ObjCDesignatedInitializerAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::ObjCDesignatedInitializer; }
};

class ObjCExceptionAttr : public InheritableAttr {

public:
  static ObjCExceptionAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ObjCExceptionAttr *A = new (Ctx) ObjCExceptionAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ObjCExceptionAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::ObjCException, R, SI, 0, 0)
  {
  }

  ObjCExceptionAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::ObjCException; }
};

class ObjCExplicitProtocolImplAttr : public InheritableAttr {

public:
  static ObjCExplicitProtocolImplAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ObjCExplicitProtocolImplAttr *A = new (Ctx) ObjCExplicitProtocolImplAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ObjCExplicitProtocolImplAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::ObjCExplicitProtocolImpl, R, SI, 0, 0)
  {
  }

  ObjCExplicitProtocolImplAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::ObjCExplicitProtocolImpl; }
};

class ObjCIndependentClassAttr : public InheritableAttr {

public:
  static ObjCIndependentClassAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ObjCIndependentClassAttr *A = new (Ctx) ObjCIndependentClassAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ObjCIndependentClassAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::ObjCIndependentClass, R, SI, 0, 0)
  {
  }

  ObjCIndependentClassAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::ObjCIndependentClass; }
};

class ObjCMethodFamilyAttr : public InheritableAttr {
public:
  enum FamilyKind {
    OMF_None,
    OMF_alloc,
    OMF_copy,
    OMF_init,
    OMF_mutableCopy,
    OMF_new
  };
private:
  FamilyKind family;


public:
  static ObjCMethodFamilyAttr *CreateImplicit(ASTContext &Ctx, FamilyKind Family, SourceRange Loc = SourceRange()) {
    ObjCMethodFamilyAttr *A = new (Ctx) ObjCMethodFamilyAttr(Loc, Ctx, Family, 0);
    A->setImplicit(true);
    return A;
  }

  ObjCMethodFamilyAttr(SourceRange R, ASTContext &Ctx
              , FamilyKind Family
              , unsigned SI
             )
    : InheritableAttr(attr::ObjCMethodFamily, R, SI, 0, 0)
              , family(Family)
  {

  }

  ObjCMethodFamilyAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  FamilyKind getFamily() const {
    return family;
  }

  static bool ConvertStrToFamilyKind(StringRef Val, FamilyKind &Out) {
    Optional<FamilyKind> R = llvm::StringSwitch<Optional<FamilyKind>>(Val)
      .Case("none", ObjCMethodFamilyAttr::OMF_None)
      .Case("alloc", ObjCMethodFamilyAttr::OMF_alloc)
      .Case("copy", ObjCMethodFamilyAttr::OMF_copy)
      .Case("init", ObjCMethodFamilyAttr::OMF_init)
      .Case("mutableCopy", ObjCMethodFamilyAttr::OMF_mutableCopy)
      .Case("new", ObjCMethodFamilyAttr::OMF_new)
      .Default(Optional<FamilyKind>());
    if (R) {
      Out = *R;
      return true;
    }
    return false;
  }

  static const char *ConvertFamilyKindToStr(FamilyKind Val) {
    switch(Val) {
    case ObjCMethodFamilyAttr::OMF_None: return "none";
    case ObjCMethodFamilyAttr::OMF_alloc: return "alloc";
    case ObjCMethodFamilyAttr::OMF_copy: return "copy";
    case ObjCMethodFamilyAttr::OMF_init: return "init";
    case ObjCMethodFamilyAttr::OMF_mutableCopy: return "mutableCopy";
    case ObjCMethodFamilyAttr::OMF_new: return "new";
    }
    llvm_unreachable("No enumerator with that value");
  }


  static bool classof(const Attr *A) { return A->getKind() == attr::ObjCMethodFamily; }
};

class ObjCNSObjectAttr : public InheritableAttr {

public:
  static ObjCNSObjectAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ObjCNSObjectAttr *A = new (Ctx) ObjCNSObjectAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ObjCNSObjectAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::ObjCNSObject, R, SI, 0, 0)
  {
  }

  ObjCNSObjectAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::ObjCNSObject; }
};

class ObjCPreciseLifetimeAttr : public InheritableAttr {

public:
  static ObjCPreciseLifetimeAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ObjCPreciseLifetimeAttr *A = new (Ctx) ObjCPreciseLifetimeAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ObjCPreciseLifetimeAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::ObjCPreciseLifetime, R, SI, 0, 0)
  {
  }

  ObjCPreciseLifetimeAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::ObjCPreciseLifetime; }
};

class ObjCRequiresPropertyDefsAttr : public InheritableAttr {

public:
  static ObjCRequiresPropertyDefsAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ObjCRequiresPropertyDefsAttr *A = new (Ctx) ObjCRequiresPropertyDefsAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ObjCRequiresPropertyDefsAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::ObjCRequiresPropertyDefs, R, SI, 0, 0)
  {
  }

  ObjCRequiresPropertyDefsAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::ObjCRequiresPropertyDefs; }
};

class ObjCRequiresSuperAttr : public InheritableAttr {

public:
  static ObjCRequiresSuperAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ObjCRequiresSuperAttr *A = new (Ctx) ObjCRequiresSuperAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ObjCRequiresSuperAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::ObjCRequiresSuper, R, SI, 0, 0)
  {
  }

  ObjCRequiresSuperAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::ObjCRequiresSuper; }
};

class ObjCReturnsInnerPointerAttr : public InheritableAttr {

public:
  static ObjCReturnsInnerPointerAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ObjCReturnsInnerPointerAttr *A = new (Ctx) ObjCReturnsInnerPointerAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ObjCReturnsInnerPointerAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::ObjCReturnsInnerPointer, R, SI, 0, 0)
  {
  }

  ObjCReturnsInnerPointerAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::ObjCReturnsInnerPointer; }
};

class ObjCRootClassAttr : public InheritableAttr {

public:
  static ObjCRootClassAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ObjCRootClassAttr *A = new (Ctx) ObjCRootClassAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ObjCRootClassAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::ObjCRootClass, R, SI, 0, 0)
  {
  }

  ObjCRootClassAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::ObjCRootClass; }
};

class ObjCRuntimeNameAttr : public Attr {
unsigned metadataNameLength;
char *metadataName;


public:
  static ObjCRuntimeNameAttr *CreateImplicit(ASTContext &Ctx, llvm::StringRef MetadataName, SourceRange Loc = SourceRange()) {
    ObjCRuntimeNameAttr *A = new (Ctx) ObjCRuntimeNameAttr(Loc, Ctx, MetadataName, 0);
    A->setImplicit(true);
    return A;
  }

  ObjCRuntimeNameAttr(SourceRange R, ASTContext &Ctx
              , llvm::StringRef MetadataName
              , unsigned SI
             )
    : Attr(attr::ObjCRuntimeName, R, SI, 0, 0)
              , metadataNameLength(MetadataName.size()),metadataName(new (Ctx, 1) char[metadataNameLength])
  {
      if (!MetadataName.empty())
        std::memcpy(metadataName, MetadataName.data(), metadataNameLength);
  }

  ObjCRuntimeNameAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  llvm::StringRef getMetadataName() const {
    return llvm::StringRef(metadataName, metadataNameLength);
  }
  unsigned getMetadataNameLength() const {
    return metadataNameLength;
  }
  void setMetadataName(ASTContext &C, llvm::StringRef S) {
    metadataNameLength = S.size();
    this->metadataName = new (C, 1) char [metadataNameLength];
    if (!S.empty())
      std::memcpy(this->metadataName, S.data(), metadataNameLength);
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::ObjCRuntimeName; }
};

class OpenCLImageAccessAttr : public Attr {

public:
  enum Spelling {
    Keyword_read_only = 0,
    Keyword_write_only = 2,
    Keyword_read_write = 4
  };

  static OpenCLImageAccessAttr *CreateImplicit(ASTContext &Ctx, Spelling S, SourceRange Loc = SourceRange()) {
    OpenCLImageAccessAttr *A = new (Ctx) OpenCLImageAccessAttr(Loc, Ctx, S);
    A->setImplicit(true);
    return A;
  }

  OpenCLImageAccessAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : Attr(attr::OpenCLImageAccess, R, SI, 0, 0)
  {
  }

  OpenCLImageAccessAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Spelling getSemanticSpelling() const {
  switch (SpellingListIndex) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return Keyword_read_only;
    case 1: return Keyword_read_only;
    case 2: return Keyword_write_only;
    case 3: return Keyword_write_only;
    case 4: return Keyword_read_write;
    case 5: return Keyword_read_write;
  }
  }
  bool isReadOnly() const { return SpellingListIndex == 0 ||
    SpellingListIndex == 1; }
  bool isReadWrite() const { return SpellingListIndex == 4 ||
    SpellingListIndex == 5; }
  bool isWriteOnly() const { return SpellingListIndex == 2 ||
    SpellingListIndex == 3; }


  static bool classof(const Attr *A) { return A->getKind() == attr::OpenCLImageAccess; }
};

class OpenCLKernelAttr : public InheritableAttr {

public:
  static OpenCLKernelAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    OpenCLKernelAttr *A = new (Ctx) OpenCLKernelAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  OpenCLKernelAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::OpenCLKernel, R, SI, 0, 0)
  {
  }

  OpenCLKernelAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::OpenCLKernel; }
};

class OptimizeNoneAttr : public InheritableAttr {

public:
  static OptimizeNoneAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    OptimizeNoneAttr *A = new (Ctx) OptimizeNoneAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  OptimizeNoneAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::OptimizeNone, R, SI, 0, 0)
  {
  }

  OptimizeNoneAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::OptimizeNone; }
};

class OverloadableAttr : public Attr {

public:
  static OverloadableAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    OverloadableAttr *A = new (Ctx) OverloadableAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  OverloadableAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : Attr(attr::Overloadable, R, SI, 0, 0)
  {
  }

  OverloadableAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::Overloadable; }
};

class OverrideAttr : public InheritableAttr {

public:
  static OverrideAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    OverrideAttr *A = new (Ctx) OverrideAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  OverrideAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Override, R, SI, 0, 0)
  {
  }

  OverrideAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::Override; }
};

class OwnershipAttr : public InheritableAttr {
IdentifierInfo * module;

  unsigned args_Size;
  unsigned *args_;


public:
  enum Spelling {
    GNU_ownership_holds = 0,
    GNU_ownership_returns = 1,
    GNU_ownership_takes = 2
  };

  static OwnershipAttr *CreateImplicit(ASTContext &Ctx, Spelling S, IdentifierInfo * Module, unsigned *Args, unsigned ArgsSize, SourceRange Loc = SourceRange()) {
    OwnershipAttr *A = new (Ctx) OwnershipAttr(Loc, Ctx, Module, Args, ArgsSize, S);
    A->setImplicit(true);
    return A;
  }

  OwnershipAttr(SourceRange R, ASTContext &Ctx
              , IdentifierInfo * Module
              , unsigned *Args, unsigned ArgsSize
              , unsigned SI
             )
    : InheritableAttr(attr::Ownership, R, SI, 0, 0)
              , module(Module)
              , args_Size(ArgsSize), args_(new (Ctx, 16) unsigned[args_Size])
  {

    std::copy(Args, Args + args_Size, args_);
  }

  OwnershipAttr(SourceRange R, ASTContext &Ctx
              , IdentifierInfo * Module
              , unsigned SI
             )
    : InheritableAttr(attr::Ownership, R, SI, 0, 0)
              , module()
              , args_Size(0), args_(nullptr)
  {

  }

  OwnershipAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Spelling getSemanticSpelling() const {
  switch (SpellingListIndex) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_ownership_holds;
    case 1: return GNU_ownership_returns;
    case 2: return GNU_ownership_takes;
  }
  }
  bool isHolds() const { return SpellingListIndex == 0; }
  bool isReturns() const { return SpellingListIndex == 1; }
  bool isTakes() const { return SpellingListIndex == 2; }
  IdentifierInfo * getModule() const {
    return module;
  }

  typedef unsigned* args_iterator;
  args_iterator args_begin() const { return args_; }
  args_iterator args_end() const { return args_ + args_Size; }
  unsigned args_size() const { return args_Size; }
  llvm::iterator_range<args_iterator> args() const { return llvm::make_range(args_begin(), args_end()); }



    enum OwnershipKind { Holds, Returns, Takes };
    OwnershipKind getOwnKind() const {
      return isHolds() ? Holds :
             isTakes() ? Takes :
             Returns;
    }
  

  static bool classof(const Attr *A) { return A->getKind() == attr::Ownership; }
};

class PackedAttr : public InheritableAttr {

public:
  static PackedAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    PackedAttr *A = new (Ctx) PackedAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  PackedAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Packed, R, SI, 0, 0)
  {
  }

  PackedAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::Packed; }
};

class ParamTypestateAttr : public InheritableAttr {
public:
  enum ConsumedState {
    Unknown,
    Consumed,
    Unconsumed
  };
private:
  ConsumedState paramState;


public:
  static ParamTypestateAttr *CreateImplicit(ASTContext &Ctx, ConsumedState ParamState, SourceRange Loc = SourceRange()) {
    ParamTypestateAttr *A = new (Ctx) ParamTypestateAttr(Loc, Ctx, ParamState, 0);
    A->setImplicit(true);
    return A;
  }

  ParamTypestateAttr(SourceRange R, ASTContext &Ctx
              , ConsumedState ParamState
              , unsigned SI
             )
    : InheritableAttr(attr::ParamTypestate, R, SI, 0, 0)
              , paramState(ParamState)
  {

  }

  ParamTypestateAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  ConsumedState getParamState() const {
    return paramState;
  }

  static bool ConvertStrToConsumedState(StringRef Val, ConsumedState &Out) {
    Optional<ConsumedState> R = llvm::StringSwitch<Optional<ConsumedState>>(Val)
      .Case("unknown", ParamTypestateAttr::Unknown)
      .Case("consumed", ParamTypestateAttr::Consumed)
      .Case("unconsumed", ParamTypestateAttr::Unconsumed)
      .Default(Optional<ConsumedState>());
    if (R) {
      Out = *R;
      return true;
    }
    return false;
  }

  static const char *ConvertConsumedStateToStr(ConsumedState Val) {
    switch(Val) {
    case ParamTypestateAttr::Unknown: return "unknown";
    case ParamTypestateAttr::Consumed: return "consumed";
    case ParamTypestateAttr::Unconsumed: return "unconsumed";
    }
    llvm_unreachable("No enumerator with that value");
  }


  static bool classof(const Attr *A) { return A->getKind() == attr::ParamTypestate; }
};

class PascalAttr : public InheritableAttr {

public:
  static PascalAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    PascalAttr *A = new (Ctx) PascalAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  PascalAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Pascal, R, SI, 0, 0)
  {
  }

  PascalAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::Pascal; }
};

class PcsAttr : public InheritableAttr {
public:
  enum PCSType {
    AAPCS,
    AAPCS_VFP
  };
private:
  PCSType pCS;


public:
  static PcsAttr *CreateImplicit(ASTContext &Ctx, PCSType PCS, SourceRange Loc = SourceRange()) {
    PcsAttr *A = new (Ctx) PcsAttr(Loc, Ctx, PCS, 0);
    A->setImplicit(true);
    return A;
  }

  PcsAttr(SourceRange R, ASTContext &Ctx
              , PCSType PCS
              , unsigned SI
             )
    : InheritableAttr(attr::Pcs, R, SI, 0, 0)
              , pCS(PCS)
  {

  }

  PcsAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  PCSType getPCS() const {
    return pCS;
  }

  static bool ConvertStrToPCSType(StringRef Val, PCSType &Out) {
    Optional<PCSType> R = llvm::StringSwitch<Optional<PCSType>>(Val)
      .Case("aapcs", PcsAttr::AAPCS)
      .Case("aapcs-vfp", PcsAttr::AAPCS_VFP)
      .Default(Optional<PCSType>());
    if (R) {
      Out = *R;
      return true;
    }
    return false;
  }

  static const char *ConvertPCSTypeToStr(PCSType Val) {
    switch(Val) {
    case PcsAttr::AAPCS: return "aapcs";
    case PcsAttr::AAPCS_VFP: return "aapcs-vfp";
    }
    llvm_unreachable("No enumerator with that value");
  }


  static bool classof(const Attr *A) { return A->getKind() == attr::Pcs; }
};

class PtGuardedByAttr : public InheritableAttr {
Expr * arg;


public:
  static PtGuardedByAttr *CreateImplicit(ASTContext &Ctx, Expr * Arg, SourceRange Loc = SourceRange()) {
    PtGuardedByAttr *A = new (Ctx) PtGuardedByAttr(Loc, Ctx, Arg, 0);
    A->setImplicit(true);
    return A;
  }

  PtGuardedByAttr(SourceRange R, ASTContext &Ctx
              , Expr * Arg
              , unsigned SI
             )
    : InheritableAttr(attr::PtGuardedBy, R, SI, 1, 1)
              , arg(Arg)
  {

  }

  PtGuardedByAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Expr * getArg() const {
    return arg;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::PtGuardedBy; }
};

class PtGuardedVarAttr : public InheritableAttr {

public:
  static PtGuardedVarAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    PtGuardedVarAttr *A = new (Ctx) PtGuardedVarAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  PtGuardedVarAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::PtGuardedVar, R, SI, 0, 0)
  {
  }

  PtGuardedVarAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::PtGuardedVar; }
};

class PureAttr : public InheritableAttr {

public:
  static PureAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    PureAttr *A = new (Ctx) PureAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  PureAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Pure, R, SI, 0, 0)
  {
  }

  PureAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::Pure; }
};

class ReleaseCapabilityAttr : public InheritableAttr {
  unsigned args_Size;
  Expr * *args_;


public:
  enum Spelling {
    GNU_release_capability = 0,
    CXX11_clang_release_capability = 1,
    GNU_release_shared_capability = 2,
    CXX11_clang_release_shared_capability = 3,
    GNU_release_generic_capability = 4,
    CXX11_clang_release_generic_capability = 5,
    GNU_unlock_function = 6
  };

  static ReleaseCapabilityAttr *CreateImplicit(ASTContext &Ctx, Spelling S, Expr * *Args, unsigned ArgsSize, SourceRange Loc = SourceRange()) {
    ReleaseCapabilityAttr *A = new (Ctx) ReleaseCapabilityAttr(Loc, Ctx, Args, ArgsSize, S);
    A->setImplicit(true);
    return A;
  }

  ReleaseCapabilityAttr(SourceRange R, ASTContext &Ctx
              , Expr * *Args, unsigned ArgsSize
              , unsigned SI
             )
    : InheritableAttr(attr::ReleaseCapability, R, SI, 1, 1)
              , args_Size(ArgsSize), args_(new (Ctx, 16) Expr *[args_Size])
  {
    std::copy(Args, Args + args_Size, args_);
  }

  ReleaseCapabilityAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::ReleaseCapability, R, SI, 1, 1)
              , args_Size(0), args_(nullptr)
  {
  }

  ReleaseCapabilityAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Spelling getSemanticSpelling() const {
  switch (SpellingListIndex) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_release_capability;
    case 1: return CXX11_clang_release_capability;
    case 2: return GNU_release_shared_capability;
    case 3: return CXX11_clang_release_shared_capability;
    case 4: return GNU_release_generic_capability;
    case 5: return CXX11_clang_release_generic_capability;
    case 6: return GNU_unlock_function;
  }
  }
  bool isShared() const { return SpellingListIndex == 2 ||
    SpellingListIndex == 3; }
  bool isGeneric() const { return SpellingListIndex == 4 ||
    SpellingListIndex == 5 ||
    SpellingListIndex == 6; }
  typedef Expr ** args_iterator;
  args_iterator args_begin() const { return args_; }
  args_iterator args_end() const { return args_ + args_Size; }
  unsigned args_size() const { return args_Size; }
  llvm::iterator_range<args_iterator> args() const { return llvm::make_range(args_begin(), args_end()); }




  static bool classof(const Attr *A) { return A->getKind() == attr::ReleaseCapability; }
};

class ReqdWorkGroupSizeAttr : public InheritableAttr {
unsigned xDim;

unsigned yDim;

unsigned zDim;


public:
  static ReqdWorkGroupSizeAttr *CreateImplicit(ASTContext &Ctx, unsigned XDim, unsigned YDim, unsigned ZDim, SourceRange Loc = SourceRange()) {
    ReqdWorkGroupSizeAttr *A = new (Ctx) ReqdWorkGroupSizeAttr(Loc, Ctx, XDim, YDim, ZDim, 0);
    A->setImplicit(true);
    return A;
  }

  ReqdWorkGroupSizeAttr(SourceRange R, ASTContext &Ctx
              , unsigned XDim
              , unsigned YDim
              , unsigned ZDim
              , unsigned SI
             )
    : InheritableAttr(attr::ReqdWorkGroupSize, R, SI, 0, 0)
              , xDim(XDim)
              , yDim(YDim)
              , zDim(ZDim)
  {



  }

  ReqdWorkGroupSizeAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  unsigned getXDim() const {
    return xDim;
  }

  unsigned getYDim() const {
    return yDim;
  }

  unsigned getZDim() const {
    return zDim;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::ReqdWorkGroupSize; }
};

class RequiresCapabilityAttr : public InheritableAttr {
  unsigned args_Size;
  Expr * *args_;


public:
  enum Spelling {
    GNU_requires_capability = 0,
    CXX11_clang_requires_capability = 1,
    GNU_exclusive_locks_required = 2,
    GNU_requires_shared_capability = 3,
    CXX11_clang_requires_shared_capability = 4,
    GNU_shared_locks_required = 5
  };

  static RequiresCapabilityAttr *CreateImplicit(ASTContext &Ctx, Spelling S, Expr * *Args, unsigned ArgsSize, SourceRange Loc = SourceRange()) {
    RequiresCapabilityAttr *A = new (Ctx) RequiresCapabilityAttr(Loc, Ctx, Args, ArgsSize, S);
    A->setImplicit(true);
    return A;
  }

  RequiresCapabilityAttr(SourceRange R, ASTContext &Ctx
              , Expr * *Args, unsigned ArgsSize
              , unsigned SI
             )
    : InheritableAttr(attr::RequiresCapability, R, SI, 1, 1)
              , args_Size(ArgsSize), args_(new (Ctx, 16) Expr *[args_Size])
  {
    std::copy(Args, Args + args_Size, args_);
  }

  RequiresCapabilityAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::RequiresCapability, R, SI, 1, 1)
              , args_Size(0), args_(nullptr)
  {
  }

  RequiresCapabilityAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Spelling getSemanticSpelling() const {
  switch (SpellingListIndex) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_requires_capability;
    case 1: return CXX11_clang_requires_capability;
    case 2: return GNU_exclusive_locks_required;
    case 3: return GNU_requires_shared_capability;
    case 4: return CXX11_clang_requires_shared_capability;
    case 5: return GNU_shared_locks_required;
  }
  }
  bool isShared() const { return SpellingListIndex == 3 ||
    SpellingListIndex == 5 ||
    SpellingListIndex == 4; }
  typedef Expr ** args_iterator;
  args_iterator args_begin() const { return args_; }
  args_iterator args_end() const { return args_ + args_Size; }
  unsigned args_size() const { return args_Size; }
  llvm::iterator_range<args_iterator> args() const { return llvm::make_range(args_begin(), args_end()); }




  static bool classof(const Attr *A) { return A->getKind() == attr::RequiresCapability; }
};

class RestrictAttr : public InheritableAttr {

public:
  enum Spelling {
    Declspec_restrict = 0,
    GNU_malloc = 1,
    CXX11_gnu_malloc = 2
  };

  static RestrictAttr *CreateImplicit(ASTContext &Ctx, Spelling S, SourceRange Loc = SourceRange()) {
    RestrictAttr *A = new (Ctx) RestrictAttr(Loc, Ctx, S);
    A->setImplicit(true);
    return A;
  }

  RestrictAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Restrict, R, SI, 0, 0)
  {
  }

  RestrictAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Spelling getSemanticSpelling() const {
  switch (SpellingListIndex) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return Declspec_restrict;
    case 1: return GNU_malloc;
    case 2: return CXX11_gnu_malloc;
  }
  }


  static bool classof(const Attr *A) { return A->getKind() == attr::Restrict; }
};

class ReturnTypestateAttr : public InheritableAttr {
public:
  enum ConsumedState {
    Unknown,
    Consumed,
    Unconsumed
  };
private:
  ConsumedState state;


public:
  static ReturnTypestateAttr *CreateImplicit(ASTContext &Ctx, ConsumedState State, SourceRange Loc = SourceRange()) {
    ReturnTypestateAttr *A = new (Ctx) ReturnTypestateAttr(Loc, Ctx, State, 0);
    A->setImplicit(true);
    return A;
  }

  ReturnTypestateAttr(SourceRange R, ASTContext &Ctx
              , ConsumedState State
              , unsigned SI
             )
    : InheritableAttr(attr::ReturnTypestate, R, SI, 0, 0)
              , state(State)
  {

  }

  ReturnTypestateAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  ConsumedState getState() const {
    return state;
  }

  static bool ConvertStrToConsumedState(StringRef Val, ConsumedState &Out) {
    Optional<ConsumedState> R = llvm::StringSwitch<Optional<ConsumedState>>(Val)
      .Case("unknown", ReturnTypestateAttr::Unknown)
      .Case("consumed", ReturnTypestateAttr::Consumed)
      .Case("unconsumed", ReturnTypestateAttr::Unconsumed)
      .Default(Optional<ConsumedState>());
    if (R) {
      Out = *R;
      return true;
    }
    return false;
  }

  static const char *ConvertConsumedStateToStr(ConsumedState Val) {
    switch(Val) {
    case ReturnTypestateAttr::Unknown: return "unknown";
    case ReturnTypestateAttr::Consumed: return "consumed";
    case ReturnTypestateAttr::Unconsumed: return "unconsumed";
    }
    llvm_unreachable("No enumerator with that value");
  }


  static bool classof(const Attr *A) { return A->getKind() == attr::ReturnTypestate; }
};

class ReturnsNonNullAttr : public InheritableAttr {

public:
  static ReturnsNonNullAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ReturnsNonNullAttr *A = new (Ctx) ReturnsNonNullAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ReturnsNonNullAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::ReturnsNonNull, R, SI, 0, 0)
  {
  }

  ReturnsNonNullAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::ReturnsNonNull; }
};

class ReturnsTwiceAttr : public InheritableAttr {

public:
  static ReturnsTwiceAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ReturnsTwiceAttr *A = new (Ctx) ReturnsTwiceAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ReturnsTwiceAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::ReturnsTwice, R, SI, 0, 0)
  {
  }

  ReturnsTwiceAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::ReturnsTwice; }
};

class ScopedLockableAttr : public InheritableAttr {

public:
  static ScopedLockableAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ScopedLockableAttr *A = new (Ctx) ScopedLockableAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ScopedLockableAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::ScopedLockable, R, SI, 0, 0)
  {
  }

  ScopedLockableAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::ScopedLockable; }
};

class SectionAttr : public InheritableAttr {
unsigned nameLength;
char *name;


public:
  enum Spelling {
    GNU_section = 0,
    CXX11_gnu_section = 1,
    Declspec_allocate = 2
  };

  static SectionAttr *CreateImplicit(ASTContext &Ctx, Spelling S, llvm::StringRef Name, SourceRange Loc = SourceRange()) {
    SectionAttr *A = new (Ctx) SectionAttr(Loc, Ctx, Name, S);
    A->setImplicit(true);
    return A;
  }

  SectionAttr(SourceRange R, ASTContext &Ctx
              , llvm::StringRef Name
              , unsigned SI
             )
    : InheritableAttr(attr::Section, R, SI, 0, 0)
              , nameLength(Name.size()),name(new (Ctx, 1) char[nameLength])
  {
      if (!Name.empty())
        std::memcpy(name, Name.data(), nameLength);
  }

  SectionAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Spelling getSemanticSpelling() const {
  switch (SpellingListIndex) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_section;
    case 1: return CXX11_gnu_section;
    case 2: return Declspec_allocate;
  }
  }
  llvm::StringRef getName() const {
    return llvm::StringRef(name, nameLength);
  }
  unsigned getNameLength() const {
    return nameLength;
  }
  void setName(ASTContext &C, llvm::StringRef S) {
    nameLength = S.size();
    this->name = new (C, 1) char [nameLength];
    if (!S.empty())
      std::memcpy(this->name, S.data(), nameLength);
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::Section; }
};

class SelectAnyAttr : public InheritableAttr {

public:
  static SelectAnyAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    SelectAnyAttr *A = new (Ctx) SelectAnyAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  SelectAnyAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::SelectAny, R, SI, 0, 0)
  {
  }

  SelectAnyAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::SelectAny; }
};

class SentinelAttr : public InheritableAttr {
int sentinel;

int nullPos;


public:
  static SentinelAttr *CreateImplicit(ASTContext &Ctx, int Sentinel, int NullPos, SourceRange Loc = SourceRange()) {
    SentinelAttr *A = new (Ctx) SentinelAttr(Loc, Ctx, Sentinel, NullPos, 0);
    A->setImplicit(true);
    return A;
  }

  SentinelAttr(SourceRange R, ASTContext &Ctx
              , int Sentinel
              , int NullPos
              , unsigned SI
             )
    : InheritableAttr(attr::Sentinel, R, SI, 0, 0)
              , sentinel(Sentinel)
              , nullPos(NullPos)
  {


  }

  SentinelAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Sentinel, R, SI, 0, 0)
              , sentinel()
              , nullPos()
  {
  }

  SentinelAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  int getSentinel() const {
    return sentinel;
  }

  static const int DefaultSentinel = 0;

  int getNullPos() const {
    return nullPos;
  }

  static const int DefaultNullPos = 0;



  static bool classof(const Attr *A) { return A->getKind() == attr::Sentinel; }
};

class SetTypestateAttr : public InheritableAttr {
public:
  enum ConsumedState {
    Unknown,
    Consumed,
    Unconsumed
  };
private:
  ConsumedState newState;


public:
  static SetTypestateAttr *CreateImplicit(ASTContext &Ctx, ConsumedState NewState, SourceRange Loc = SourceRange()) {
    SetTypestateAttr *A = new (Ctx) SetTypestateAttr(Loc, Ctx, NewState, 0);
    A->setImplicit(true);
    return A;
  }

  SetTypestateAttr(SourceRange R, ASTContext &Ctx
              , ConsumedState NewState
              , unsigned SI
             )
    : InheritableAttr(attr::SetTypestate, R, SI, 0, 0)
              , newState(NewState)
  {

  }

  SetTypestateAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  ConsumedState getNewState() const {
    return newState;
  }

  static bool ConvertStrToConsumedState(StringRef Val, ConsumedState &Out) {
    Optional<ConsumedState> R = llvm::StringSwitch<Optional<ConsumedState>>(Val)
      .Case("unknown", SetTypestateAttr::Unknown)
      .Case("consumed", SetTypestateAttr::Consumed)
      .Case("unconsumed", SetTypestateAttr::Unconsumed)
      .Default(Optional<ConsumedState>());
    if (R) {
      Out = *R;
      return true;
    }
    return false;
  }

  static const char *ConvertConsumedStateToStr(ConsumedState Val) {
    switch(Val) {
    case SetTypestateAttr::Unknown: return "unknown";
    case SetTypestateAttr::Consumed: return "consumed";
    case SetTypestateAttr::Unconsumed: return "unconsumed";
    }
    llvm_unreachable("No enumerator with that value");
  }


  static bool classof(const Attr *A) { return A->getKind() == attr::SetTypestate; }
};

class SharedTrylockFunctionAttr : public InheritableAttr {
Expr * successValue;

  unsigned args_Size;
  Expr * *args_;


public:
  static SharedTrylockFunctionAttr *CreateImplicit(ASTContext &Ctx, Expr * SuccessValue, Expr * *Args, unsigned ArgsSize, SourceRange Loc = SourceRange()) {
    SharedTrylockFunctionAttr *A = new (Ctx) SharedTrylockFunctionAttr(Loc, Ctx, SuccessValue, Args, ArgsSize, 0);
    A->setImplicit(true);
    return A;
  }

  SharedTrylockFunctionAttr(SourceRange R, ASTContext &Ctx
              , Expr * SuccessValue
              , Expr * *Args, unsigned ArgsSize
              , unsigned SI
             )
    : InheritableAttr(attr::SharedTrylockFunction, R, SI, 1, 1)
              , successValue(SuccessValue)
              , args_Size(ArgsSize), args_(new (Ctx, 16) Expr *[args_Size])
  {

    std::copy(Args, Args + args_Size, args_);
  }

  SharedTrylockFunctionAttr(SourceRange R, ASTContext &Ctx
              , Expr * SuccessValue
              , unsigned SI
             )
    : InheritableAttr(attr::SharedTrylockFunction, R, SI, 1, 1)
              , successValue()
              , args_Size(0), args_(nullptr)
  {

  }

  SharedTrylockFunctionAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Expr * getSuccessValue() const {
    return successValue;
  }

  typedef Expr ** args_iterator;
  args_iterator args_begin() const { return args_; }
  args_iterator args_end() const { return args_ + args_Size; }
  unsigned args_size() const { return args_Size; }
  llvm::iterator_range<args_iterator> args() const { return llvm::make_range(args_begin(), args_end()); }




  static bool classof(const Attr *A) { return A->getKind() == attr::SharedTrylockFunction; }
};

class StdCallAttr : public InheritableAttr {

public:
  static StdCallAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    StdCallAttr *A = new (Ctx) StdCallAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  StdCallAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::StdCall, R, SI, 0, 0)
  {
  }

  StdCallAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::StdCall; }
};

class SysVABIAttr : public InheritableAttr {

public:
  static SysVABIAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    SysVABIAttr *A = new (Ctx) SysVABIAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  SysVABIAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::SysVABI, R, SI, 0, 0)
  {
  }

  SysVABIAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::SysVABI; }
};

class TLSModelAttr : public InheritableAttr {
unsigned modelLength;
char *model;


public:
  static TLSModelAttr *CreateImplicit(ASTContext &Ctx, llvm::StringRef Model, SourceRange Loc = SourceRange()) {
    TLSModelAttr *A = new (Ctx) TLSModelAttr(Loc, Ctx, Model, 0);
    A->setImplicit(true);
    return A;
  }

  TLSModelAttr(SourceRange R, ASTContext &Ctx
              , llvm::StringRef Model
              , unsigned SI
             )
    : InheritableAttr(attr::TLSModel, R, SI, 0, 0)
              , modelLength(Model.size()),model(new (Ctx, 1) char[modelLength])
  {
      if (!Model.empty())
        std::memcpy(model, Model.data(), modelLength);
  }

  TLSModelAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  llvm::StringRef getModel() const {
    return llvm::StringRef(model, modelLength);
  }
  unsigned getModelLength() const {
    return modelLength;
  }
  void setModel(ASTContext &C, llvm::StringRef S) {
    modelLength = S.size();
    this->model = new (C, 1) char [modelLength];
    if (!S.empty())
      std::memcpy(this->model, S.data(), modelLength);
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::TLSModel; }
};

class TargetAttr : public InheritableAttr {
unsigned featuresLength;
char *features;


public:
  static TargetAttr *CreateImplicit(ASTContext &Ctx, llvm::StringRef Features, SourceRange Loc = SourceRange()) {
    TargetAttr *A = new (Ctx) TargetAttr(Loc, Ctx, Features, 0);
    A->setImplicit(true);
    return A;
  }

  TargetAttr(SourceRange R, ASTContext &Ctx
              , llvm::StringRef Features
              , unsigned SI
             )
    : InheritableAttr(attr::Target, R, SI, 0, 0)
              , featuresLength(Features.size()),features(new (Ctx, 1) char[featuresLength])
  {
      if (!Features.empty())
        std::memcpy(features, Features.data(), featuresLength);
  }

  TargetAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  llvm::StringRef getFeatures() const {
    return llvm::StringRef(features, featuresLength);
  }
  unsigned getFeaturesLength() const {
    return featuresLength;
  }
  void setFeatures(ASTContext &C, llvm::StringRef S) {
    featuresLength = S.size();
    this->features = new (C, 1) char [featuresLength];
    if (!S.empty())
      std::memcpy(this->features, S.data(), featuresLength);
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::Target; }
};

class TestTypestateAttr : public InheritableAttr {
public:
  enum ConsumedState {
    Consumed,
    Unconsumed
  };
private:
  ConsumedState testState;


public:
  static TestTypestateAttr *CreateImplicit(ASTContext &Ctx, ConsumedState TestState, SourceRange Loc = SourceRange()) {
    TestTypestateAttr *A = new (Ctx) TestTypestateAttr(Loc, Ctx, TestState, 0);
    A->setImplicit(true);
    return A;
  }

  TestTypestateAttr(SourceRange R, ASTContext &Ctx
              , ConsumedState TestState
              , unsigned SI
             )
    : InheritableAttr(attr::TestTypestate, R, SI, 0, 0)
              , testState(TestState)
  {

  }

  TestTypestateAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  ConsumedState getTestState() const {
    return testState;
  }

  static bool ConvertStrToConsumedState(StringRef Val, ConsumedState &Out) {
    Optional<ConsumedState> R = llvm::StringSwitch<Optional<ConsumedState>>(Val)
      .Case("consumed", TestTypestateAttr::Consumed)
      .Case("unconsumed", TestTypestateAttr::Unconsumed)
      .Default(Optional<ConsumedState>());
    if (R) {
      Out = *R;
      return true;
    }
    return false;
  }

  static const char *ConvertConsumedStateToStr(ConsumedState Val) {
    switch(Val) {
    case TestTypestateAttr::Consumed: return "consumed";
    case TestTypestateAttr::Unconsumed: return "unconsumed";
    }
    llvm_unreachable("No enumerator with that value");
  }


  static bool classof(const Attr *A) { return A->getKind() == attr::TestTypestate; }
};

class ThisCallAttr : public InheritableAttr {

public:
  static ThisCallAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ThisCallAttr *A = new (Ctx) ThisCallAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ThisCallAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::ThisCall, R, SI, 0, 0)
  {
  }

  ThisCallAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::ThisCall; }
};

class ThreadAttr : public Attr {

public:
  static ThreadAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    ThreadAttr *A = new (Ctx) ThreadAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  ThreadAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : Attr(attr::Thread, R, SI, 0, 0)
  {
  }

  ThreadAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::Thread; }
};

class TransparentUnionAttr : public InheritableAttr {

public:
  static TransparentUnionAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    TransparentUnionAttr *A = new (Ctx) TransparentUnionAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  TransparentUnionAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::TransparentUnion, R, SI, 0, 0)
  {
  }

  TransparentUnionAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::TransparentUnion; }
};

class TryAcquireCapabilityAttr : public InheritableAttr {
Expr * successValue;

  unsigned args_Size;
  Expr * *args_;


public:
  enum Spelling {
    GNU_try_acquire_capability = 0,
    CXX11_clang_try_acquire_capability = 1,
    GNU_try_acquire_shared_capability = 2,
    CXX11_clang_try_acquire_shared_capability = 3
  };

  static TryAcquireCapabilityAttr *CreateImplicit(ASTContext &Ctx, Spelling S, Expr * SuccessValue, Expr * *Args, unsigned ArgsSize, SourceRange Loc = SourceRange()) {
    TryAcquireCapabilityAttr *A = new (Ctx) TryAcquireCapabilityAttr(Loc, Ctx, SuccessValue, Args, ArgsSize, S);
    A->setImplicit(true);
    return A;
  }

  TryAcquireCapabilityAttr(SourceRange R, ASTContext &Ctx
              , Expr * SuccessValue
              , Expr * *Args, unsigned ArgsSize
              , unsigned SI
             )
    : InheritableAttr(attr::TryAcquireCapability, R, SI, 1, 1)
              , successValue(SuccessValue)
              , args_Size(ArgsSize), args_(new (Ctx, 16) Expr *[args_Size])
  {

    std::copy(Args, Args + args_Size, args_);
  }

  TryAcquireCapabilityAttr(SourceRange R, ASTContext &Ctx
              , Expr * SuccessValue
              , unsigned SI
             )
    : InheritableAttr(attr::TryAcquireCapability, R, SI, 1, 1)
              , successValue()
              , args_Size(0), args_(nullptr)
  {

  }

  TryAcquireCapabilityAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  Spelling getSemanticSpelling() const {
  switch (SpellingListIndex) {
    default: llvm_unreachable("Unknown spelling list index");
    case 0: return GNU_try_acquire_capability;
    case 1: return CXX11_clang_try_acquire_capability;
    case 2: return GNU_try_acquire_shared_capability;
    case 3: return CXX11_clang_try_acquire_shared_capability;
  }
  }
  bool isShared() const { return SpellingListIndex == 2 ||
    SpellingListIndex == 3; }
  Expr * getSuccessValue() const {
    return successValue;
  }

  typedef Expr ** args_iterator;
  args_iterator args_begin() const { return args_; }
  args_iterator args_end() const { return args_ + args_Size; }
  unsigned args_size() const { return args_Size; }
  llvm::iterator_range<args_iterator> args() const { return llvm::make_range(args_begin(), args_end()); }




  static bool classof(const Attr *A) { return A->getKind() == attr::TryAcquireCapability; }
};

class TypeTagForDatatypeAttr : public InheritableAttr {
IdentifierInfo * argumentKind;

TypeSourceInfo * matchingCType;

bool layoutCompatible;

bool mustBeNull;


public:
  static TypeTagForDatatypeAttr *CreateImplicit(ASTContext &Ctx, IdentifierInfo * ArgumentKind, TypeSourceInfo * MatchingCType, bool LayoutCompatible, bool MustBeNull, SourceRange Loc = SourceRange()) {
    TypeTagForDatatypeAttr *A = new (Ctx) TypeTagForDatatypeAttr(Loc, Ctx, ArgumentKind, MatchingCType, LayoutCompatible, MustBeNull, 0);
    A->setImplicit(true);
    return A;
  }

  TypeTagForDatatypeAttr(SourceRange R, ASTContext &Ctx
              , IdentifierInfo * ArgumentKind
              , TypeSourceInfo * MatchingCType
              , bool LayoutCompatible
              , bool MustBeNull
              , unsigned SI
             )
    : InheritableAttr(attr::TypeTagForDatatype, R, SI, 0, 0)
              , argumentKind(ArgumentKind)
              , matchingCType(MatchingCType)
              , layoutCompatible(LayoutCompatible)
              , mustBeNull(MustBeNull)
  {




  }

  TypeTagForDatatypeAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  IdentifierInfo * getArgumentKind() const {
    return argumentKind;
  }

  QualType getMatchingCType() const {
    return matchingCType->getType();
  }  TypeSourceInfo * getMatchingCTypeLoc() const {
    return matchingCType;
  }

  bool getLayoutCompatible() const {
    return layoutCompatible;
  }

  bool getMustBeNull() const {
    return mustBeNull;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::TypeTagForDatatype; }
};

class TypeVisibilityAttr : public InheritableAttr {
public:
  enum VisibilityType {
    Default,
    Hidden,
    Protected
  };
private:
  VisibilityType visibility;


public:
  static TypeVisibilityAttr *CreateImplicit(ASTContext &Ctx, VisibilityType Visibility, SourceRange Loc = SourceRange()) {
    TypeVisibilityAttr *A = new (Ctx) TypeVisibilityAttr(Loc, Ctx, Visibility, 0);
    A->setImplicit(true);
    return A;
  }

  TypeVisibilityAttr(SourceRange R, ASTContext &Ctx
              , VisibilityType Visibility
              , unsigned SI
             )
    : InheritableAttr(attr::TypeVisibility, R, SI, 0, 0)
              , visibility(Visibility)
  {

  }

  TypeVisibilityAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  VisibilityType getVisibility() const {
    return visibility;
  }

  static bool ConvertStrToVisibilityType(StringRef Val, VisibilityType &Out) {
    Optional<VisibilityType> R = llvm::StringSwitch<Optional<VisibilityType>>(Val)
      .Case("default", TypeVisibilityAttr::Default)
      .Case("hidden", TypeVisibilityAttr::Hidden)
      .Case("internal", TypeVisibilityAttr::Hidden)
      .Case("protected", TypeVisibilityAttr::Protected)
      .Default(Optional<VisibilityType>());
    if (R) {
      Out = *R;
      return true;
    }
    return false;
  }

  static const char *ConvertVisibilityTypeToStr(VisibilityType Val) {
    switch(Val) {
    case TypeVisibilityAttr::Default: return "default";
    case TypeVisibilityAttr::Hidden: return "hidden";
    case TypeVisibilityAttr::Protected: return "protected";
    }
    llvm_unreachable("No enumerator with that value");
  }


  static bool classof(const Attr *A) { return A->getKind() == attr::TypeVisibility; }
};

class UnavailableAttr : public InheritableAttr {
unsigned messageLength;
char *message;


public:
  static UnavailableAttr *CreateImplicit(ASTContext &Ctx, llvm::StringRef Message, SourceRange Loc = SourceRange()) {
    UnavailableAttr *A = new (Ctx) UnavailableAttr(Loc, Ctx, Message, 0);
    A->setImplicit(true);
    return A;
  }

  UnavailableAttr(SourceRange R, ASTContext &Ctx
              , llvm::StringRef Message
              , unsigned SI
             )
    : InheritableAttr(attr::Unavailable, R, SI, 0, 0)
              , messageLength(Message.size()),message(new (Ctx, 1) char[messageLength])
  {
      if (!Message.empty())
        std::memcpy(message, Message.data(), messageLength);
  }

  UnavailableAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Unavailable, R, SI, 0, 0)
              , messageLength(0),message(0)
  {
  }

  UnavailableAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  llvm::StringRef getMessage() const {
    return llvm::StringRef(message, messageLength);
  }
  unsigned getMessageLength() const {
    return messageLength;
  }
  void setMessage(ASTContext &C, llvm::StringRef S) {
    messageLength = S.size();
    this->message = new (C, 1) char [messageLength];
    if (!S.empty())
      std::memcpy(this->message, S.data(), messageLength);
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::Unavailable; }
};

class UnusedAttr : public InheritableAttr {

public:
  static UnusedAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    UnusedAttr *A = new (Ctx) UnusedAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  UnusedAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Unused, R, SI, 0, 0)
  {
  }

  UnusedAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::Unused; }
};

class UsedAttr : public InheritableAttr {

public:
  static UsedAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    UsedAttr *A = new (Ctx) UsedAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  UsedAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Used, R, SI, 0, 0)
  {
  }

  UsedAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::Used; }
};

class UuidAttr : public InheritableAttr {
unsigned guidLength;
char *guid;


public:
  static UuidAttr *CreateImplicit(ASTContext &Ctx, llvm::StringRef Guid, SourceRange Loc = SourceRange()) {
    UuidAttr *A = new (Ctx) UuidAttr(Loc, Ctx, Guid, 0);
    A->setImplicit(true);
    return A;
  }

  UuidAttr(SourceRange R, ASTContext &Ctx
              , llvm::StringRef Guid
              , unsigned SI
             )
    : InheritableAttr(attr::Uuid, R, SI, 0, 0)
              , guidLength(Guid.size()),guid(new (Ctx, 1) char[guidLength])
  {
      if (!Guid.empty())
        std::memcpy(guid, Guid.data(), guidLength);
  }

  UuidAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  llvm::StringRef getGuid() const {
    return llvm::StringRef(guid, guidLength);
  }
  unsigned getGuidLength() const {
    return guidLength;
  }
  void setGuid(ASTContext &C, llvm::StringRef S) {
    guidLength = S.size();
    this->guid = new (C, 1) char [guidLength];
    if (!S.empty())
      std::memcpy(this->guid, S.data(), guidLength);
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::Uuid; }
};

class VecReturnAttr : public InheritableAttr {

public:
  static VecReturnAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    VecReturnAttr *A = new (Ctx) VecReturnAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  VecReturnAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::VecReturn, R, SI, 0, 0)
  {
  }

  VecReturnAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::VecReturn; }
};

class VecTypeHintAttr : public InheritableAttr {
TypeSourceInfo * typeHint;


public:
  static VecTypeHintAttr *CreateImplicit(ASTContext &Ctx, TypeSourceInfo * TypeHint, SourceRange Loc = SourceRange()) {
    VecTypeHintAttr *A = new (Ctx) VecTypeHintAttr(Loc, Ctx, TypeHint, 0);
    A->setImplicit(true);
    return A;
  }

  VecTypeHintAttr(SourceRange R, ASTContext &Ctx
              , TypeSourceInfo * TypeHint
              , unsigned SI
             )
    : InheritableAttr(attr::VecTypeHint, R, SI, 0, 0)
              , typeHint(TypeHint)
  {

  }

  VecTypeHintAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  QualType getTypeHint() const {
    return typeHint->getType();
  }  TypeSourceInfo * getTypeHintLoc() const {
    return typeHint;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::VecTypeHint; }
};

class VectorCallAttr : public InheritableAttr {

public:
  static VectorCallAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    VectorCallAttr *A = new (Ctx) VectorCallAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  VectorCallAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::VectorCall, R, SI, 0, 0)
  {
  }

  VectorCallAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::VectorCall; }
};

class VisibilityAttr : public InheritableAttr {
public:
  enum VisibilityType {
    Default,
    Hidden,
    Protected
  };
private:
  VisibilityType visibility;


public:
  static VisibilityAttr *CreateImplicit(ASTContext &Ctx, VisibilityType Visibility, SourceRange Loc = SourceRange()) {
    VisibilityAttr *A = new (Ctx) VisibilityAttr(Loc, Ctx, Visibility, 0);
    A->setImplicit(true);
    return A;
  }

  VisibilityAttr(SourceRange R, ASTContext &Ctx
              , VisibilityType Visibility
              , unsigned SI
             )
    : InheritableAttr(attr::Visibility, R, SI, 0, 0)
              , visibility(Visibility)
  {

  }

  VisibilityAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  VisibilityType getVisibility() const {
    return visibility;
  }

  static bool ConvertStrToVisibilityType(StringRef Val, VisibilityType &Out) {
    Optional<VisibilityType> R = llvm::StringSwitch<Optional<VisibilityType>>(Val)
      .Case("default", VisibilityAttr::Default)
      .Case("hidden", VisibilityAttr::Hidden)
      .Case("internal", VisibilityAttr::Hidden)
      .Case("protected", VisibilityAttr::Protected)
      .Default(Optional<VisibilityType>());
    if (R) {
      Out = *R;
      return true;
    }
    return false;
  }

  static const char *ConvertVisibilityTypeToStr(VisibilityType Val) {
    switch(Val) {
    case VisibilityAttr::Default: return "default";
    case VisibilityAttr::Hidden: return "hidden";
    case VisibilityAttr::Protected: return "protected";
    }
    llvm_unreachable("No enumerator with that value");
  }


  static bool classof(const Attr *A) { return A->getKind() == attr::Visibility; }
};

class WarnUnusedAttr : public InheritableAttr {

public:
  static WarnUnusedAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    WarnUnusedAttr *A = new (Ctx) WarnUnusedAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  WarnUnusedAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::WarnUnused, R, SI, 0, 0)
  {
  }

  WarnUnusedAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::WarnUnused; }
};

class WarnUnusedResultAttr : public InheritableAttr {

public:
  static WarnUnusedResultAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    WarnUnusedResultAttr *A = new (Ctx) WarnUnusedResultAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  WarnUnusedResultAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::WarnUnusedResult, R, SI, 0, 0)
  {
  }

  WarnUnusedResultAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::WarnUnusedResult; }
};

class WeakAttr : public InheritableAttr {

public:
  static WeakAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    WeakAttr *A = new (Ctx) WeakAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  WeakAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::Weak, R, SI, 0, 0)
  {
  }

  WeakAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::Weak; }
};

class WeakImportAttr : public InheritableAttr {

public:
  static WeakImportAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    WeakImportAttr *A = new (Ctx) WeakImportAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  WeakImportAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::WeakImport, R, SI, 0, 0)
  {
  }

  WeakImportAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::WeakImport; }
};

class WeakRefAttr : public InheritableAttr {
unsigned aliaseeLength;
char *aliasee;


public:
  static WeakRefAttr *CreateImplicit(ASTContext &Ctx, llvm::StringRef Aliasee, SourceRange Loc = SourceRange()) {
    WeakRefAttr *A = new (Ctx) WeakRefAttr(Loc, Ctx, Aliasee, 0);
    A->setImplicit(true);
    return A;
  }

  WeakRefAttr(SourceRange R, ASTContext &Ctx
              , llvm::StringRef Aliasee
              , unsigned SI
             )
    : InheritableAttr(attr::WeakRef, R, SI, 0, 0)
              , aliaseeLength(Aliasee.size()),aliasee(new (Ctx, 1) char[aliaseeLength])
  {
      if (!Aliasee.empty())
        std::memcpy(aliasee, Aliasee.data(), aliaseeLength);
  }

  WeakRefAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::WeakRef, R, SI, 0, 0)
              , aliaseeLength(0),aliasee(0)
  {
  }

  WeakRefAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  llvm::StringRef getAliasee() const {
    return llvm::StringRef(aliasee, aliaseeLength);
  }
  unsigned getAliaseeLength() const {
    return aliaseeLength;
  }
  void setAliasee(ASTContext &C, llvm::StringRef S) {
    aliaseeLength = S.size();
    this->aliasee = new (C, 1) char [aliaseeLength];
    if (!S.empty())
      std::memcpy(this->aliasee, S.data(), aliaseeLength);
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::WeakRef; }
};

class WorkGroupSizeHintAttr : public InheritableAttr {
unsigned xDim;

unsigned yDim;

unsigned zDim;


public:
  static WorkGroupSizeHintAttr *CreateImplicit(ASTContext &Ctx, unsigned XDim, unsigned YDim, unsigned ZDim, SourceRange Loc = SourceRange()) {
    WorkGroupSizeHintAttr *A = new (Ctx) WorkGroupSizeHintAttr(Loc, Ctx, XDim, YDim, ZDim, 0);
    A->setImplicit(true);
    return A;
  }

  WorkGroupSizeHintAttr(SourceRange R, ASTContext &Ctx
              , unsigned XDim
              , unsigned YDim
              , unsigned ZDim
              , unsigned SI
             )
    : InheritableAttr(attr::WorkGroupSizeHint, R, SI, 0, 0)
              , xDim(XDim)
              , yDim(YDim)
              , zDim(ZDim)
  {



  }

  WorkGroupSizeHintAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;
  unsigned getXDim() const {
    return xDim;
  }

  unsigned getYDim() const {
    return yDim;
  }

  unsigned getZDim() const {
    return zDim;
  }



  static bool classof(const Attr *A) { return A->getKind() == attr::WorkGroupSizeHint; }
};

class X86ForceAlignArgPointerAttr : public InheritableAttr {

public:
  static X86ForceAlignArgPointerAttr *CreateImplicit(ASTContext &Ctx, SourceRange Loc = SourceRange()) {
    X86ForceAlignArgPointerAttr *A = new (Ctx) X86ForceAlignArgPointerAttr(Loc, Ctx, 0);
    A->setImplicit(true);
    return A;
  }

  X86ForceAlignArgPointerAttr(SourceRange R, ASTContext &Ctx
              , unsigned SI
             )
    : InheritableAttr(attr::X86ForceAlignArgPointer, R, SI, 0, 0)
  {
  }

  X86ForceAlignArgPointerAttr *clone(ASTContext &C) const;
  void printPretty(raw_ostream &OS,
                   const PrintingPolicy &Policy) const;
  const char *getSpelling() const;


  static bool classof(const Attr *A) { return A->getKind() == attr::X86ForceAlignArgPointer; }
};

#endif
