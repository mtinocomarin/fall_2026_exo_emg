// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_4\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.00%
// test_accuracy: 60.94%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-17 13:43:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.527701, 0.527602,
    0.132825, -0.132631,
    0.081106, -0.081127,
    -0.016970, 0.016869,
    -0.454025, 0.454047,
    -0.101258, 0.101253,
    0.095407, -0.095408,
    0.054133, -0.054145,
    -0.697245, 0.697201,
    0.373750, -0.373658,
    -0.223648, 0.223617,
    0.353093, -0.353120,
};

float Cg_init[2] = {
    -0.230772, -0.230759
};

float xstd_init[12] = {
    0.001014, 0.000079, 0.011039, 0.079537, 0.002369, 0.000658, 0.074860, 0.156141, 0.000884, 0.000122, 0.018704, 0.069171
};

float xmean_init[12] = {
    0.006390, -0.007693, 0.004286, 0.138572, 0.008575, -0.006908, 0.100595, 0.448036, 0.004369, -0.007711, 0.009643, 0.132857
};

