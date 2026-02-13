// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.67%
// test_accuracy: 79.17%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_13.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-12 12:42:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.239100, 1.239126,
    0.330479, -0.330477,
    0.167186, -0.167219,
    1.402550, -1.402526,
    -0.548187, 0.547954,
    0.073307, -0.073073,
    0.122779, -0.122742,
    -0.205692, 0.205648,
    -0.151401, 0.151348,
    0.091714, -0.091613,
    -0.640014, 0.639993,
    0.117813, -0.117840,
};

float Cg_init[2] = {
    -0.572190, -0.572189
};

float xstd_init[12] = {
    0.004466, 0.001848, 0.146262, 0.201742, 0.001412, 0.000256, 0.035929, 0.097519, 0.000679, 0.000171, 0.031490, 0.106304
};

float xmean_init[12] = {
    0.010813, -0.005635, 0.244089, 0.688400, 0.003551, -0.007727, 0.012622, 0.088267, 0.003542, -0.007726, 0.013689, 0.118933
};

