// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_4\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 70.24%
// test_accuracy: 52.08%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt']}
// generated: 2025-12-17 13:43:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.393952, 0.393949,
    0.246520, -0.246502,
    0.019384, -0.019384,
    -0.173978, 0.173957,
    -0.369097, 0.369137,
    -0.186176, 0.186153,
    0.038331, -0.038355,
    0.291924, -0.291914,
    -0.455007, 0.455048,
    0.220421, -0.220472,
    -0.039171, 0.039188,
    0.145082, -0.145088,
};

float Cg_init[2] = {
    -0.142503, -0.142508
};

float xstd_init[12] = {
    0.001005, 0.000080, 0.013031, 0.081210, 0.003008, 0.000819, 0.088944, 0.180008, 0.000842, 0.000112, 0.019691, 0.072239
};

float xmean_init[12] = {
    0.006458, -0.007689, 0.005119, 0.143155, 0.008635, -0.006850, 0.105556, 0.443452, 0.004348, -0.007717, 0.010397, 0.128096
};

