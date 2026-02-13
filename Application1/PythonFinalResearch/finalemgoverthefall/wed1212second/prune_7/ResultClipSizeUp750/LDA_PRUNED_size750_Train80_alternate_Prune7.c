// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_7\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.14%
// test_accuracy: 75.45%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_21.txt', 'act1\\trial_29.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_17.txt']}
// generated: 2025-12-17 17:02:16
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.297132, 0.297317,
    -0.093117, 0.092843,
    -0.039672, 0.039702,
    0.167001, -0.166890,
    1.510529, -1.510830,
    -1.156317, 1.156788,
    -0.067370, 0.067274,
    0.151046, -0.151166,
    -0.483363, 0.483310,
    -0.592706, 0.592802,
    0.591364, -0.591426,
    1.006357, -1.006344,
};

float Cg_init[2] = {
    -0.500459, -0.500562
};

float xstd_init[12] = {
    0.000897, 0.000075, 0.008339, 0.063728, 0.000665, 0.000103, 0.013226, 0.048945, 0.003370, 0.001023, 0.117922, 0.210202
};

float xmean_init[12] = {
    0.005529, -0.007759, 0.002171, 0.090115, 0.002345, -0.007858, 0.004038, 0.044114, 0.008967, -0.006600, 0.132762, 0.470228
};

