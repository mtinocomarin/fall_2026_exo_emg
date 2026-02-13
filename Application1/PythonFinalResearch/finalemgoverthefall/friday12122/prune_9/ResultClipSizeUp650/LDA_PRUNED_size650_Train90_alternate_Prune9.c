// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_9\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 81.79%
// test_accuracy: 73.96%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_40.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_35.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt']}
// generated: 2025-12-12 16:06:50
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.790643, 0.790661,
    -0.094779, 0.094765,
    0.520675, -0.520701,
    0.685274, -0.685256,
    0.892721, -0.892609,
    -0.896428, 0.896295,
    -0.057124, 0.057147,
    -0.139608, 0.139611,
    -0.543523, 0.543469,
    0.476626, -0.476583,
    -0.363246, 0.363237,
    0.060494, -0.060527,
};

float Cg_init[2] = {
    -0.346937, -0.346929
};

float xstd_init[12] = {
    0.003553, 0.001297, 0.101926, 0.168330, 0.001564, 0.000463, 0.027100, 0.078070, 0.001727, 0.000091, 0.016083, 0.069276
};

float xmean_init[12] = {
    0.009671, -0.006323, 0.169178, 0.580247, 0.003232, -0.007723, 0.007243, 0.052407, 0.003259, -0.007808, 0.004403, 0.067593
};

